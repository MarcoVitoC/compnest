#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> t(n);
    for (int &ti: t) cin >> ti;
    sort(all(t));

    ll sum = t[0], ans = 1;
    for (int i=1; i<n; i++) {
        if (t[i] < sum) continue;

        sum += t[i];
        ans++;
    }
    cout << ans << endl;

    return 0;
}