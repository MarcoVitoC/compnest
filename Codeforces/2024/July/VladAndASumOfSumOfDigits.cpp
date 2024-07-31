#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MAXN = 2 * 1e5;

vector<int> ans(MAXN + 5);

int sumOfDigit(int x) {
    int sum = 0;
    while (x > 0) {
        sum += (x % 10);
        x /= 10;
    }

    return sum;
}

void preCompute() {
    ans[1] = 1;
    for (int i=2; i<=MAXN; i++) {
        ans[i] = sumOfDigit(i) + ans[i - 1];
    }
}

void solve() {
    int n;
    cin >> n;

    cout << ans[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    preCompute();
    while (t--) {
        solve();
    }

    return 0;
}