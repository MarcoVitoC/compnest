#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, S;
    cin >> N >> S;

    if (2 * N > S) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for (int i=0; i<N-1; i++) {
        cout << S / N << " ";
    }
    cout << S - ((N - 1) * (S / N)) << endl;
    cout << (S / N) - 1 << endl;

    return 0;
}