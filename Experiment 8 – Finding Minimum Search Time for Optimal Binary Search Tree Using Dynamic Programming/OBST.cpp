#include <iostream>
#include <vector>
#include <climits>
#include <string>
using namespace std;

// Display the optimal tree structure
void printTree(const vector<int>& keys,
               const vector<vector<int>>& root,
               int i, int j, string position) {

    if (i > j)
        return;

    int r = root[i][j];

    cout << position << ": "
         << keys[r] << endl;

    printTree(keys, root, i, r - 1,
              "Left child of " + to_string(keys[r]));

    printTree(keys, root, r + 1, j,
              "Right child of " + to_string(keys[r]));
}

// Optimal Binary Search Tree
void optimalBST(const vector<int>& keys,
                const vector<int>& freq,
                int n) {

    vector<vector<long long>> cost(
        n, vector<long long>(n, 0)
    );

    vector<vector<int>> root(
        n, vector<int>(n, -1)
    );

    vector<long long> prefix(n + 1, 0);

    // Calculate prefix sums
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + freq[i];
    }

    // Initialize single-key subtrees
    for (int i = 0; i < n; i++) {
        cost[i][i] = freq[i];
        root[i][i] = i;
    }

    // Consider increasing subtree lengths
    for (int length = 2; length <= n; length++) {

        for (int i = 0; i <= n - length; i++) {

            int j = i + length - 1;

            cost[i][j] = LLONG_MAX;

            long long sum =
                prefix[j + 1] - prefix[i];

            // Consider each key as root
            for (int r = i; r <= j; r++) {

                long long leftCost =
                    (r > i) ? cost[i][r - 1] : 0;

                long long rightCost =
                    (r < j) ? cost[r + 1][j] : 0;

                long long currentCost =
                    leftCost + rightCost + sum;

                if (currentCost < cost[i][j]) {

                    cost[i][j] = currentCost;
                    root[i][j] = r;
                }
            }
        }
    }

    cout << "\nMinimum Search Cost: "
         << cost[0][n - 1] << endl;

    cout << "\nOptimal Binary Search Tree:\n";

    printTree(keys, root, 0, n - 1, "Root");
}

int main() {

    int n;

    cout << "Enter number of keys: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of keys.\n";
        return 1;
    }

    vector<int> keys(n);
    vector<int> freq(n);

    cout << "Enter keys in ascending order:\n";

    for (int i = 0; i < n; i++) {

        cin >> keys[i];

        if (i > 0 && keys[i] <= keys[i - 1]) {
            cout << "Keys must be distinct and sorted.\n";
            return 1;
        }
    }

    cout << "Enter search frequencies:\n";

    for (int i = 0; i < n; i++) {

        cin >> freq[i];

        if (freq[i] < 0) {
            cout << "Frequency cannot be negative.\n";
            return 1;
        }
    }

    optimalBST(keys, freq, n);

    return 0;
}



 Sample input
3
10 12 20
34 8 50


 Sample output
Enter number of keys: 3
Enter keys in ascending order:
10 12 20
Enter search frequencies:
34 8 50

Minimum Search Cost: 142

Optimal Binary Search Tree:
Root: 20
Left child of 20: 10
Right child of 10: 12
