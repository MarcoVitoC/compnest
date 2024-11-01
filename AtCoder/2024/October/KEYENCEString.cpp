#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S, T = "keyence";
    cin >> S;

    int N = S.length(), M = T.length();
    for (int i=0; i<=M; i++) {
        if (S.substr(0, i) + S.substr(N - (M - i)) == T) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}