#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int A, B, C;
    cin >> A >> B >> C;

    int N = A;
    for (int i=0; i<B; i++) {
        if (N % B == C) {
            cout << "YES" << endl;
            return 0;
        }
        N += A;
    }
    cout << "NO" << endl;

    return 0;
}