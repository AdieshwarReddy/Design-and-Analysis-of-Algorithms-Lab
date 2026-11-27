#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n;

vector<vector<int>> cost;
vector<vector<long long>> dp;
vector<vector<int>> nextCity;

// Travelling Salesman using Dynamic Programming
long long tsp(int mask, int pos) {

    // All cities have been visited
    if (mask == (1 << n) - 1) {
        return cost[pos][0];
    }

    // Return previously calculated result
    if (dp[mask][pos] != -1) {
        return dp[mask][pos];
    }

    long long minimum = LLONG_MAX;

    // Visit every unvisited city
    for (int city = 0; city < n; city++) {

        if ((mask & (1 << city)) == 0) {

            long long newCost =
                cost[pos][city] +
                tsp(mask | (1 << city), city);

            if (newCost < minimum) {

                minimum = newCost;
                nextCity[mask][pos] = city;
            }
        }
    }

    // Store the minimum cost
    return dp[mask][pos] = minimum;
}

// Display the optimal travelling route
void printRoute() {

    int mask = 1;
    int pos = 0;

    cout << "Optimal Route: 0";

    while (mask != (1 << n) - 1) {

        int city = nextCity[mask][pos];

        cout << " -> " << city;

        mask = mask | (1 << city);
        pos = city;
    }

    cout << " -> 0" << endl;
}

int main() {

    cout << "Enter number of cities: ";
    cin >> n;

    if (n <= 0 || n > 15) {
        cout << "Enter between 1 and 15 cities.\n";
        return 1;
    }

    cost.resize(n, vector<int>(n));

    cout << "Enter travelling cost matrix:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> cost[i][j];

            if (cost[i][j] < 0) {
                cout << "Cost cannot be negative.\n";
                return 1;
            }
        }
    }

    // Initialize DP and route tables
    dp.resize(
        1 << n, vector<long long>(n, -1)
    );

    nextCity.resize(
        1 << n, vector<int>(n, -1)
    );

    // Start from city 0
    long long minimumCost = tsp(1, 0);

    cout << "\nMinimum Travelling Cost: "
         << minimumCost << endl;

    printRoute();

    return 0;
}
