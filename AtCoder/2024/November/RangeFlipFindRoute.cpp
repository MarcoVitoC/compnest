#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

const int INF = 1e9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int H, W;
    cin >> H >> W;

    int cost[H][W];
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            char s;
            cin >> s;

            cost[i][j] = (s == '#');
        }
    }

    vector<vector<int>> dp(H, vector<int>(W, INF));
    dp[0][0] = cost[0][0];
    for (int i=0; i<H; i++) {
        for (int j=0; j<W; j++) {
            if (i + j == 0) continue;

            // previous cost + (not contiguous black cell [##])
            if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + (cost[i][j] && cost[i - 1][j] == 0));
            if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + (cost[i][j] && cost[i][j - 1] == 0));
        }
    }
    cout << dp[H - 1][W - 1] << endl;

    return 0;
}