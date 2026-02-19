// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// bool findPathDFS(int current, int parent, int target, vector<vector<int>>& adjacency, 
//                  vector<int>& tempPath, vector<int>& resultPath) {
//     tempPath.push_back(current);

//     if (current == target) {
//         resultPath = tempPath;
//         return true;
//     }

//     for (int neighbor : adjacency[current]) {
//         if (neighbor != parent) {
//             if (findPathDFS(neighbor, current, target, adjacency, tempPath, resultPath)) {
//                 return true;
//             }
//         }
//     }

//     tempPath.pop_back();
//     return false;
// }

// bool isLeafLike(int node, int parent, vector<vector<int>>& adjacency, vector<bool>& destroyed) {
//     for (int neighbor : adjacency[node]) {
//         if (neighbor != parent && !destroyed[neighbor]) {
//             return false;
//         }
//     }
//     return true;
// }

// void solveCase() {
//     int nodes;
//     cin >> nodes;

//     vector<vector<int>> adjacency(nodes + 1);
//     for (int i = 0; i < nodes - 1; ++i) {
//         int u, v;
//         cin >> u >> v;
//         adjacency[u].push_back(v);
//         adjacency[v].push_back(u);
//     }

//     vector<int> path;
//     vector<int> tempPath;
//     findPathDFS(1, 0, nodes, adjacency, tempPath, path);

//     map<int, int> nextOnPath;
//     for (int i = 0; i < path.size() - 1; ++i) {
//         nextOnPath[path[i]] = path[i + 1];
//     }

//     vector<bool> destroyed(nodes + 1, false);
//     vector<pair<int, int>> actions;
//     int current = 1;

//     while (current != nodes) {
//         int nextNode = nextOnPath[current];

//         vector<int> leafNodes;
//         vector<int> subtreeNodes;

//         for (int neighbor : adjacency[current]) {
//             if (neighbor == nextNode || destroyed[neighbor]) continue;

//             if (isLeafLike(neighbor, current, adjacency, destroyed)) {
//                 leafNodes.push_back(neighbor);
//             } else {
//                 subtreeNodes.push_back(neighbor);
//             }
//         }

//         for (int subNode : subtreeNodes) {
//             actions.push_back({2, subNode});
//             destroyed[subNode] = true;
//         }

//         for (int i = 0; i < leafNodes.size(); ++i) {
//             int leaf = leafNodes[i];
//             actions.push_back({2, leaf});
//             destroyed[leaf] = true;

//             if (i < leafNodes.size() - 1) {
//                 actions.push_back({1, 0});
//                 actions.push_back({1, 0});
//             }
//         }

//         actions.push_back({1, 0});
//         current = nextNode;
//     }

//     cout << actions.size() << "\n";
//     for (auto const& [type, node] : actions) {
//         if (type == 1) {
//             cout << "1\n";
//         } else {
//             cout << "2 " << node << "\n";
//         }
//     }
//     cout << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int testCases;
//     cin >> testCases;
//     while (testCases--) {
//         solveCase();
//     }

//     return 0;
// }




#include <iostream>
#include <vector>
#include <map>
#include <algorithm> 

using namespace std;

bool find_path_dfs(int u, int p, int target, vector<vector<int>>& adj, 
                   vector<int>& current_path, vector<int>& final_path) {
    current_path.push_back(u);
    
    if (u == target) {
        final_path = current_path;
        return true;
    }
    
    for (int v : adj[u]) {
        if (v != p) {
            if (find_path_dfs(v, u, target, adj, current_path, final_path)) {
                return true;
            }
        }
    }
    
    current_path.pop_back();
    return false;
}

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> path;
    vector<int> temp_path;
    find_path_dfs(1, 0, n, adj, temp_path, path);
    
    map<int, int> next_on_path;
    for (int i = 0; i < path.size() - 1; ++i) {
        next_on_path[path[i]] = path[i+1];
    }
    
    vector<bool> destroyed(n + 1, false);
    vector<pair<int, int>> instructions;
    int curr = 1;
    
    while (curr != n) {
        int next = next_on_path[curr];
        vector<int> bad_neighbors;
        
        for (int v : adj[curr]) {
            if (v != next && !destroyed[v]) {
                bad_neighbors.push_back(v);
            }
        }
        
        for (int i = 0; i < bad_neighbors.size(); ++i) {
            int q = bad_neighbors[i];
            instructions.push_back({2, q});
            destroyed[q] = true;
            
            if (i < bad_neighbors.size() - 1) {
                instructions.push_back({1, 0});
                instructions.push_back({1, 0});
            }
        }
        
        instructions.push_back({1, 0});
        curr = next;
    }
    
    cout << instructions.size() << "\n";
    for (auto const& [type, node] : instructions) {
        if (type == 1) {
            cout << "1\n";
        } else {
            cout << "2 " << node << "\n";
        }
    }
    cout << "\n"; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
