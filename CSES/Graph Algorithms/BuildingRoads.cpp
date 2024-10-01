#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int n, m, ans = -1;
vector<vector<int>> adj;
vector<bool> isVisited;

void dfs(int curr) {
    isVisited[curr] = true;
    for (int next: adj[curr]) {
        if (!isVisited[next]) dfs(next);
    }
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
    vector<int> ans;
    for (int i=1; i<=n; i++) {
        if (!isVisited[i]) {
            ans.push_back(i);
            dfs(i);
        }
    }
    
    cout << ans.size() -1 << endl;
    for (int i=0; i<ans.size()-1; i++) {
        cout << ans[i] << " " << ans[i + 1] << endl;
    }

    return 0;
}