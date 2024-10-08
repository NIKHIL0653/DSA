#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        vector<int> degree(n + 1, 0);
        
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            degree[u]++;
            degree[v]++;
        }
        
        // BFS to remove leaves level by level
        queue<int> q;
        int remaining_nodes = n;

        // Push all leaves into the queue
        for (int i = 2; i <= n; i++) {
            if (degree[i] == 1) {
                q.push(i);
            }
        }

        int operations = 0;
        while (!q.empty()) {
            int size = q.size();
            operations++;
            for (int i = 0; i < size; i++) {
                int leaf = q.front();
                q.pop();
                remaining_nodes--;
                
                // Remove the leaf and update its neighbor
                for (int neighbor : adj[leaf]) {
                    degree[neighbor]--;
                    if (degree[neighbor] == 1 && neighbor != 1) {
                        q.push(neighbor);
                    }
                }
            }

            // Stop when all leaves are at the same distance
            if (remaining_nodes == 1) break;
        }

        cout << operations << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
