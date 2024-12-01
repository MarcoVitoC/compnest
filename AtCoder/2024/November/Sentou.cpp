#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, T;
    cin >> N >> T;

    vector<int> t(N);
    for (int &ti: t) cin >> ti;

    ll ans = 0;
    for (int i=1; i<N; i++) {
        ans += min(T, t[i] - t[i - 1]);
    }
    cout << ans + T << endl;

    return 0;
}