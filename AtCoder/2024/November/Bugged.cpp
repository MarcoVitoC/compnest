#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    int ans = 0, mn = 1e5;
    while (N--) {
        int s;
        cin >> s;

        ans += s;
        if (s % 10 != 0) {
            mn = min(mn, s);
        }
    }
    cout << ((ans % 10 == 0) ? max(0, ans - mn) : ans) << endl;

    return 0;
}