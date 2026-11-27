#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
private:
    vector<int> parent;
    vector<int> rank;

public:
    // Initialize disjoint sets
    UnionFind(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
    }

    // Find with path compression
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }

        return parent[x];
    }

    // Union by rank
    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY)
            return;

        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        }
        else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        }
        else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }

    // Check connectivity
    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {
    int n, m;

    cout << "Enter number of people: ";
    cin >> n;

    if (n <= 0)
        return 1;

    UnionFind uf(n);

    cout << "Enter number of friendships: ";
    cin >> m;

    cout << "Enter friendship pairs:\n";

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        if (x < 1 || x > n || y < 1 || y > n) {
            cout << "Invalid person ID.\n";
            return 1;
        }

        uf.unionSet(x, y);
    }

    int q;

    cout << "\nEnter number of queries: ";
    cin >> q;

    cout << "Enter people to check connectivity:\n";

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;

        if (x < 1 || x > n || y < 1 || y > n) {
            cout << "Invalid person ID.\n";
            continue;
        }

        if (uf.connected(x, y)) {
            cout << x << " and " << y
                 << " belong to the same group.\n";
        }
        else {
            cout << x << " and " << y
                 << " belong to different groups.\n";
        }
    }

    return 0;
}






Sample input:
6
4
1 2
2 3
4 5
5 6
3
1 3
4 6
1 5



  
  Sample output:
Enter number of people: 6
Enter number of friendships: 4
Enter friendship pairs:
1 2
2 3
4 5
5 6

Enter number of queries: 3
Enter people to check connectivity:
1 3
1 and 3 belong to the same group.
4 6
4 and 6 belong to the same group.
1 5
1 and 5 belong to different groups.
