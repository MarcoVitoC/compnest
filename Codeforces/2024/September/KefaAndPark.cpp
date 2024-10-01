#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int n, m, ans = 0;
vector<int> a, isVisited;
vector<vector<int>> adj;

bool isLeaf(int curr) {
    for (int next: adj[curr]) {
        if (!isVisited[next]) return false;
    }

    return true;
}

void dfs(int curr) {
    isVisited[curr] = true;

    if (a[curr] > m) return;
    if (isLeaf(curr)) ans++;
    
    for (int next: adj[curr]) {
        if (isVisited[next]) continue;

        if (a[next] == 1) a[next] += a[curr];
        dfs(next);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;

    a.resize(n + 1);
    isVisited.resize(n + 1);
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }

    adj.resize(n + 1);
    for (int i=0; i<n-1; i++) {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
    cout << ans << endl;

    return 0;
}