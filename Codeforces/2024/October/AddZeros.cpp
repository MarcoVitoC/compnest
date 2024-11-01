#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void dfs(ll curr, map<ll, vector<ll>>& adj, map<ll, bool>& isVisited, ll &ans) {
    isVisited[curr] = true;

    ans = max(ans, curr);
    for (auto next: adj[curr]) {
        if (isVisited[next]) continue;
        dfs(next, adj, isVisited, ans);
    }
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll &ai: a) cin >> ai;

    map<ll, vector<ll>> adj;
    for (int i=1; i<n; i++) {
        ll start = a[i] + i;
        ll next = start + i;

        adj[start].push_back(next);
    }

    map<ll, bool> isVisited;
    ll ans = 0;
    dfs(n, adj, isVisited, ans);
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}