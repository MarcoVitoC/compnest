#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    for (int mask=0; mask<(1<<n); mask++) { // try every combination of rotations
        int sum = 0;
        for (int i=0; i<n; i++) { // assume to rotate clockwise if true, and counterclockwise if otherwise
            sum = (mask & (1 << i)) ? sum + a[i] : sum - a[i];
        }

        if (sum % 360 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}