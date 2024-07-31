#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    int cntOdd = 0, cntEven = 0;
    for (int &ai: a) {
        cin >> ai;

        if (ai % 2 == 0) cntEven++;
        else cntOdd++;
    }

    for (int i=1; i<=min(cntOdd, x); i+=2) {
        // try to take odd number of odd numbers, then check if the number of even numbers still >= the rest
        if (cntEven >= x - i) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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