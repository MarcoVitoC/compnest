#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int ceil(int a, int b) {
    return (a + b - 1) / b;
}

void solve() {
    int n, k;
    cin >> n >> k;

    // n - 1 need k - 1 numbers of 1 to get sum of n
    cout << ceil(n - 1, k - 1) << endl;
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