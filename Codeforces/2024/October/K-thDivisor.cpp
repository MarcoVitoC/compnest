#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> d;
    for (ll i=1; i*i<=n; i++) {
        if (n % i == 0) d.push_back(i);
    }
    for (ll i=d.size()-1; i>=0; i--) {
        if (n / d[i] != d[i]) d.push_back(n / d[i]);
    }

    cout << ((k - 1 < d.size()) ? d[k - 1] : -1) << endl;

    return 0;
}