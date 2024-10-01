#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int N = 3e4;

bool isPrime(int n) {
    for (int i=2; i<min(n, N); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    bool ok = (n == 1);
    if (n > 2 && n % 2 == 0) {
        if ((n & (n - 1)) == 0) ok = true;
        else if (isPrime(n / 2)) ok = true;
    }

    cout << ((ok) ? "FastestFinger" : "Ashishgup") << endl;
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