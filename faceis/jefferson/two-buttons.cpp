# include <iostream>
# include <vector>
# include <list>
# include <queue>

using namespace std;

class Graph {
public:
    int v;
    vector<list<int>> adj_list;
    vector<int> level;

    Graph(int v): v(v) { adj_list.resize(v + 1); level.resize(v + 1); }
    void addEdge(int v1, int v2) { adj_list[v1].push_back(v2); }

    int shortest_path(int root, int dest) {
        vector<bool> visited(v, false);
        queue<int> q;
        int cur_node;

        level[root] = 0;
        q.push(root); visited[root] = true;
        while (!q.empty()) {
            cur_node = q.front(); q.pop();
            for (auto &child : adj_list[cur_node]) {
                if (!visited[child]) {
                    visited[child] = true; q.push(child);
                    level[child] = level[cur_node] + 1;
                    if (child == dest) return level[child];
                }
            }
        }
        return -1;
    }
};

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, size;
    cin >> n >> m;
    size = n > m ? n << 1 : m << 1;
    Graph g(size);

    for (int i = 1; i <= size; ++i) {
        if (i - 1 > 0) g.addEdge(i, i - 1);
        if (i << 1 <= size) g.addEdge(i, i << 1);
    }

    cout << g.shortest_path(n, m) << '\n';

    return 0;
}
