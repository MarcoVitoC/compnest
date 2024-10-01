#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string S;
    cin >> S;

    int N = S.length();
    vector<int> a(N + 1);
    for (int i=0; i<N; i++) {
        if (S[i] == '<') {
            a[i + 1] = max(a[i + 1], a[i] + 1);
        }
    }
    for (int i=N-1; i>0; i--) {
        if (S[i] == '>') {
            a[i] = max(a[i], a[i + 1] + 1);
        }
    }
    if (S[0] == '>') a[0] = a[1] + 1;

    ll ans = 0;
    for (int x: a) {
        ans += x;
    }
    cout << ans << endl;

    return 0;
}