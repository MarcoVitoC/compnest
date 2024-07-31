#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    char c;
    vector<bool> canUse(26, false);
    for (int i=0; i<k; i++) {
        cin >> c;
        canUse[c - 'a'] = true;
    }

    ll ans = 0, len = 0;
    for (char ch: s) {
        if (!canUse[ch - 'a']) {
            ans += len * (len + 1) / 2;
            len = 0;
            continue;
        }

        len++;
    }

    ans += len * (len + 1) / 2;
    cout << ans << endl;

    return 0;
}