#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    string ans(N, '#');
    bool ok = true;
    while (M--) {
        int s, c;
        cin >> s >> c;

        if (N >= 2 && s == 1 && c == 0) {
            ok = false;
        } else if (ans[s - 1] == '#') {
            ans[s - 1] = c + '0';
        } else if (ans[s - 1] != c + '0') {
            ok = false;
        }
    }

    if (!ok) {
        cout << -1 << endl;
        return 0;
    }
    
    if (ans[0] == '#') ans[0] = (N >= 2) ? '1' : '0';
    for (char c: ans) {
        cout << ((c == '#') ? '0' : c);
    }
    cout << endl;

    return 0;
}