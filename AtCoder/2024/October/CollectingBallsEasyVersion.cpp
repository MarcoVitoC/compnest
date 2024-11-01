#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K, x;
    cin >> N >> K;

    int ans = 0;
    while (N--) {
        cin >> x;

        ans += min(x * 2, abs(K - x) * 2);
    }
    cout << ans << endl;

    return 0;
}