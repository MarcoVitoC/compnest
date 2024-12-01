#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int n;
map<ll, int> mp;
vector<ll> a;

void dfs(ll x, vector<ll>& res) {
    res.push_back(x);

    if (mp[x * 2]) dfs(x * 2, res);
    if (x % 3 == 0 && mp[x / 3]) dfs(x / 3, res);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;

    a.resize(n);
    for (ll &ai: a) {
        cin >> ai;
        mp[ai]++;
    }

    vector<ll> ans;
    for (ll x: a) {
        vector<ll> res;
        dfs(x, res);

        if (res.size() == n) {
            ans = res;
            break;
        }
    }

    for (ll x: ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}