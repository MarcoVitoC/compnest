#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

vector<vector<int>> lang, adj;
vector<int> vis;

void dfs(int curr) {
    vis[curr] = true;
    for (auto next: adj[curr]) {
        if (vis[next]) continue;
        dfs(next);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, ok = false;
    cin >> n >> m;

    lang.resize(m + 1);
    adj.resize(n + 1);
    vis.resize(n + 1);
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;

        for (int j=0; j<k; j++) {
            int ai;
            cin >> ai;

            lang[ai].push_back(i + 1);
            ok = true;
        }
    }

    for (int i=1; i<=m; i++) {
        int z = lang[i].size() - 1;

        for (int j=0; j<z; j++) {
            adj[lang[i][j]].push_back(lang[i][j + 1]);
            adj[lang[i][j + 1]].push_back(lang[i][j]);
        }
    }

    int ans = 0;
    for (int i=1; i<=n; i++) {
        if (vis[i]) continue;

        dfs(i);
        ans++;
    }
    cout << ans - ok << endl;

    return 0;
}