#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Structure to represent a job
struct Job {
    string id;
    int deadline;
    int profit;
};

vector<Job> jobs;
vector<int> schedule;
vector<int> bestSchedule;
vector<long long> remainingProfit;

long long maxProfit = 0;

int n, maxDeadline;

// Branch and Bound function
void branchAndBound(int index,
                    long long currentProfit) {

    // Update the best solution
    if (currentProfit > maxProfit) {

        maxProfit = currentProfit;
        bestSchedule = schedule;
    }

    // All jobs have been considered
    if (index == n)
        return;

    // Calculate upper bound
    long long upperBound =
        currentProfit + remainingProfit[index];

    // Prune unpromising branches
    if (upperBound <= maxProfit)
        return;

    // Find the latest available time slot
    int slot = min(jobs[index].deadline,
                   maxDeadline);

    while (slot > 0 && schedule[slot] != -1) {
        slot--;
    }

    // Branch 1: Include the current job
    if (slot > 0) {

        schedule[slot] = index;

        branchAndBound(
            index + 1,
            currentProfit + jobs[index].profit
        );

        // Remove the job from the schedule
        schedule[slot] = -1;
    }

    // Branch 2: Exclude the current job
    branchAndBound(index + 1, currentProfit);
}

int main() {

    cout << "Enter number of jobs: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of jobs.\n";
        return 1;
    }

    jobs.resize(n);
    maxDeadline = 0;

    cout << "Enter Job ID, Deadline and Profit:\n";

    for (int i = 0; i < n; i++) {

        cin >> jobs[i].id
            >> jobs[i].deadline
            >> jobs[i].profit;

        if (jobs[i].deadline <= 0 ||
            jobs[i].profit < 0) {

            cout << "Invalid deadline or profit.\n";
            return 1;
        }

        maxDeadline = max(
            maxDeadline, jobs[i].deadline
        );
    }

    // Sort jobs in descending order of profit
    stable_sort(jobs.begin(), jobs.end(),
        [](const Job& a, const Job& b) {
            return a.profit > b.profit;
        });

    // At most N jobs can be scheduled
    maxDeadline = min(maxDeadline, n);

    schedule.resize(maxDeadline + 1, -1);
    bestSchedule.resize(maxDeadline + 1, -1);

    // Calculate remaining possible profit
    remainingProfit.resize(n + 1, 0);

    for (int i = n - 1; i >= 0; i--) {

        remainingProfit[i] =
            remainingProfit[i + 1] +
            jobs[i].profit;
    }

    // Start Branch and Bound
    branchAndBound(0, 0);

    cout << "\nOptimal Job Schedule:\n";
    cout << "Time Slot\tJob ID\tProfit\n";

    for (int i = 1; i <= maxDeadline; i++) {

        if (bestSchedule[i] != -1) {

            int j = bestSchedule[i];

            cout << i << "\t\t"
                 << jobs[j].id << "\t"
                 << jobs[j].profit << endl;
        }
    }

    cout << "\nMaximum Profit: "
         << maxProfit << endl;

    return 0;
}

 Sample input
5
J1 2 100
J2 1 19
J3 2 27
J4 1 25
J5 3 15


 Sample output

Enter number of jobs: 5
Enter Job ID, Deadline and Profit:
J1 2 100
J2 1 19
J3 2 27
J4 1 25
J5 3 15

Optimal Job Schedule:
Time Slot       Job ID  Profit
1               J3      27
2               J1      100
3               J5      15

Maximum Profit: 142
