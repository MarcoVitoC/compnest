#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll K, A, B;
    cin >> K >> A >> B;

    if (B - A <= 2) {
        cout << K + 1 << endl;
        return 0;
    }

    ll ans = A;
    K -= A - 1;
    if (K % 2 != 0) ans++, K--;
    
    ans += (B - A) * (K / 2);
    cout << ans << endl;

    return 0;
}