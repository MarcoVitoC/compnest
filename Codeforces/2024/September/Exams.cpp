#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> vp(n);
    for (int i=0; i<n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }
    sort(all(vp));

    int ans = -1;
    for (int i=0; i<n; i++) {
        ans = (vp[i].second >= ans) ? vp[i].second : vp[i].first;
    }
    cout << ans << endl;

    return 0;
}