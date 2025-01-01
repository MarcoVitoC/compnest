#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

vector<vector<int>> adj(26);
vector<char> ans;
vector<bool> vis(26), isParent(26);

bool hasCycle(int curr) { // dfs
    vis[curr] = true;
    isParent[curr] = true;

    for (auto next: adj[curr]) {
        if ((!vis[next] && hasCycle(next)) || isParent[next]) return true;
    }

    isParent[curr] = false;
    ans.push_back(curr + 'a');
    return false;
}

bool isCyclic() {
    for (int i=0; i<26; i++) {
        if (!vis[i] && hasCycle(i)) return true;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<string> names(n);
    for (auto &name: names) cin >> name;

    for (int i=0; i<n-1; i++) {
        string s = names[i], t = names[i + 1];
        int sLen = s.length(), tLen = t.length();

        bool isSame = true;
        for (int j=0; j<min(sLen, tLen); j++) {
            if (s[j] != t[j]) {
                isSame = false;
                adj[t[j] - 'a'].push_back(s[j] - 'a');
                break;
            }
        }

        if (isSame && sLen > tLen) {
            cout << "Impossible" << endl;
            return 0;
        }
    }

    if (isCyclic()) {
        cout << "Impossible" << endl;
        return 0;
    }

    for (int i=0; i<26; i++) {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}