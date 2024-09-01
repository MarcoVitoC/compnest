#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int bfs(vector<vector<int>>& adj, vector<bool>& isVisited, vector<int>& c, int k) {
    queue<int> q;
    int mn = c[k - 1];

    q.push(k);
    isVisited[k] = true;

    while (!q.empty()) {
        int curr = q.front(); q.pop();

        for (auto next: adj[curr]) {
            mn = min(mn, c[next - 1]);

            if (!isVisited[next]) {
                isVisited[next] = true;
                q.push(next);
            }
        }
    }

    return mn;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> c(n);
    for (int &ci: c) cin >> ci;

    int x, y;
    vector<vector<int>> adj(n + 5);
    vector<bool> isVisited(n + 5, false);
    while (m--) {
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    ll ans = 0;
    for (int i=1; i<=n; i++) {
        if (!isVisited[i]) {
            ans += bfs(adj, isVisited, c, i);
        }
    }
    cout << ans << endl;

    return 0;
}