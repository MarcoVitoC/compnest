#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
   int N, W;
   cin >> N >> W;

   vector<int> w(N+5), v(N+5);
   int sumValue = 0;
   for (int i=0; i<N; i++) {
      cin >> w[i] >> v[i];
      sumValue += v[i];
   }

   vector<int> dp(sumValue + 5, INF);
   dp[0] = 0;
   for (int i=0; i<N; i++) {
      for (int j=sumValue-v[i]; j>=0; j--) {
         dp[j + v[i]] = min(dp[j + v[i]], w[i] + dp[j]); // find the least weight to get value V
      }
   }

   int ans = -1;
   for (int i=0; i<=sumValue; i++) {
      if (dp[i] <= W) { // if the weight to get a value is valid
         ans = max(ans, i); // get the maximum value
      }
   }
   cout << ans << endl;

   return 0;
}