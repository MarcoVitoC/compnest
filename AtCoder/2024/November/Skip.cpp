#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, X;
    cin >> N >> X;

    int ans = 0;
    for (int i=0; i<N; i++) {
        int xi;
        cin >> xi;

        ans = __gcd(ans, abs(X - xi));
    }
    cout << ans << endl;

    return 0;
}