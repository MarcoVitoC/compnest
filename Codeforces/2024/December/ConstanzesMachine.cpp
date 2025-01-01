#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    int n = s.length();
    vector<int> dp(n + 1, 1);
    for (int i=0; i<n; i++) {
        if (s[i] == 'w' || s[i] == 'm') {
            cout << 0 << endl;
            return 0;
        }

        dp[i + 1] = ((s[i] == 'u' || s[i] == 'n') && s[i] == s[i - 1]) ? dp[i] + dp[i - 1] : dp[i];
        dp[i + 1] %= MOD;
    }
    cout << dp[n] % MOD << endl;

    return 0;
}