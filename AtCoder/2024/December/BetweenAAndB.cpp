#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

ll f(ll n, ll x) {
    return (n >= 0) ? n / x + 1 : 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll a, b, x;
    cin >> a >> b >> x;

    cout << f(b, x) - f(a - 1, x) << endl;

    return 0;
}