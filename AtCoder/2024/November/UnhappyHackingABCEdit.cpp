#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    string ans = "";
    for (char c: s) {
        if (c == 'B') {
            if (ans.length() > 0) ans.pop_back();
            continue;
        }
        ans += c;
    }
    cout << ans << endl;

    return 0;
}