#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll N, M;
    cin >> N >> M;

    if (N == 1 && M == 1) {
        cout << 1 << endl;
    } else if (N == 1 && M != 1) {
        cout << M - 2 << endl;
    } else if (N >= 2 && M >= 2) {
        cout << (N - 2) * (M - 2) << endl;
    } else {
        cout << N - 2 << endl;
    }

    return 0;
}