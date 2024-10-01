#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<int> p, isVisited;

void bfs(int start) {
    queue<int> q;

    q.push(start);
    isVisited[1] = true;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        
        for (int next: adj[curr]) {
            if (!isVisited[next]) {
                isVisited[next] = true;
                p[next] = curr;
                q.push(next);
            }
        }
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

    p.resize(n + 1);
    isVisited.resize(n + 1);
    bfs(1);

    int k = n;
    vector<int> ans;
    ans.push_back(n);
    while (p[k] != 0) {
        ans.push_back(p[k]);
        k = p[k];
    }

    if (ans.size() == 1) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    cout << ans.size() << endl;
    for (int i=ans.size()-1; i>=0; i--) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}