#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll N, A, B;
    cin >> N >> A >> B;

    if (A > B || (N == 1 && A != B)) {
        cout << 0 << endl;
        return 0;
    }

    ll mn = A * (N - 1) + B;
    ll mx = B * (N - 1) + A;
    cout << mx - mn + 1 << endl;

    return 0;
}