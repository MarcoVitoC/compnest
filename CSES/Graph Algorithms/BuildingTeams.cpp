#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<int> isVisited, color;

bool bfs(int start) {
    queue<int> q;

    q.push(start);
    isVisited[start] = true;
    color[start] = 1;
    while (!q.empty()) {
        int curr = q.front(); q.pop();

        for (int next: adj[curr]) {
            if (color[next] == color[curr]) return false;
            if (!isVisited[next]) {
                isVisited[next] = true;
                color[next] = color[curr] * -1;
                q.push(next);
            }
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    adj.resize(n + 1);
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    isVisited.resize(n + 1);
    color.resize(n + 1);
    for (int i=1; i<=n; i++) {
        if (isVisited[i]) continue;
        if (!bfs(i)) {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }

    for (int i=1; i<=n; i++) {
        cout << ((color[i] == 1) ? 1 : 2) << " ";
    }
    cout << endl;

    return 0;
}