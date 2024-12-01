#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

vector<vector<int>> adj;
vector<int> vis, color;

void dfs(int curr) {
    vis[curr] = true;
    for (auto next: adj[curr]) {
        if (vis[next]) continue;
        if (color[next] == color[curr]) {
            color[next] = !color[curr];
        }

        dfs(next);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    adj.resize(n);
    vis.resize(n);
    color.resize(n);
    for(int i=0; i<n-1; i++) {
        int u, v;
        cin >> u >> v;

        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0);
    int cntColor1 = 0, cntColor2 = 0;
    for (int i=0; i<n; i++) {
        if (color[i]) cntColor1++;
        else cntColor2++;
    }
    cout << 1LL * cntColor1 * cntColor2 - (n - 1) << endl;

    return 0;
}