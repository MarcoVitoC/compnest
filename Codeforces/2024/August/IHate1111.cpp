#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
    int x;
    cin >> x;
    
    /*
        x can only be summed by some number of 11, 111, 11...11 if x is divisible by 11. Otherwise, 
        it should be subtracted by 111. That's because if x has >= 3 digits and we subtract it 
        with 1111, 11111, or 11...11, the result will be negative. Thus, it's impossible to check 
        whether x is divisible by 11 since we have skipped potential solutions.
    */
    while (x >= 0) {
        if (x % 11 == 0) {
            cout << "YES" << endl;
            return;
        }
        x -= 111;
    }
    cout << "NO" << endl;
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