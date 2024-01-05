#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int N, W;
   cin >> N >> W;

   vector<int> w(N+5), v(N+5);
   for (int i=1; i<=N; i++) {
      cin >> w[i] >> v[i];
   }

   vector<vector<ll>> dp(N+5, vector<ll>(W+5, 0));
   for (int i=1; i<=N; i++) {
      for (int j=0; j<=W; j++) {
         dp[i][j] = dp[i-1][j]; // initialize the current dp to the previous value
         if (w[i] <= j) { // if the weight is valid
            // either we skip or take the current value and sum it with the dp of the remaining weight's value
            dp[i][j] = max(dp[i][j], dp[i-1][j - w[i]] + v[i]);
         }
      }
   }

   cout << dp[N][W] << endl; // print the final answer at the last take at weight W

   return 0;
}