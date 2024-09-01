#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    ll ck = n / lcm(x, y); // number of indexes that are divisible by x and y
    ll kx = (n / x) - ck; // number of indexes that are only divisible by x
    ll ky = (n / y) - ck; // number of indexes that are only divisible by y

    ll sx = (kx * (n + (n - kx + 1))) / 2;
    ll sy = (ky * (ky + 1)) / 2;

    cout << sx - sy << endl;
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