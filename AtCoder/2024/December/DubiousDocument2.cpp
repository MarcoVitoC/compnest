#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string Sp, T;
    cin >> Sp >> T;

    int n = Sp.length(), m = T.length();
    int l = n - m, r = n - 1;
    string S = Sp;
    while (l >= 0) {
        bool ok = true;
        for (int i=l; i<=r; i++) {
            if (Sp[i] != '?' && Sp[i] != T[i - l]) {
                ok = false;
                break;
            }
        }

        if (ok) break;
        l--, r--;
    }

    if (l < 0) {
        cout << "UNRESTORABLE" << endl;
        return 0;
    }

    for (int i=0; i<n; i++) {
        if (i >= l && i <= r) S[i] = T[i - l];
        else if (Sp[i] == '?') S[i] = 'a';
    }
    cout << S << endl;

    return 0;
}