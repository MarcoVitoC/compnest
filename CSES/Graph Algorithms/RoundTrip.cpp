#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

vector<vector<int>> adj;
vector<int> ans, visited, parent;
int sv = 0, ev = 0;

int dfs(int start) {
    stack<int> st;

    st.push(start);
    while (!st.empty()) {
        int curr = st.top(); st.pop();

        visited[curr] = true;
        for (int next: adj[curr]) {
            if (next == parent[curr]) continue;
            if (visited[next]) {
                sv = next, ev = curr;
                return curr;
            }

            st.push(next);
            parent[next] = curr;
        }
    }

    return -1;
}

bool hasCycle(int n) {
    for (int i=1; i<=n; i++) {
        if (visited[i]) continue;
        if (dfs(i) != -1) return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    visited.resize(n + 1, 0);
    parent.resize(n + 1, -1);
    
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if (!hasCycle(n)) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    ans.push_back(sv);
    while (ev != sv) {
        ans.push_back(ev);
        ev = parent[ev];
    }
    ans.push_back(sv);

    cout << ans.size() << endl;
    for (int x: ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}