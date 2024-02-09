#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

int main() {
   int n, x;
   cin >> n >> x;

   vector<int> c(n);
   for (int &ci: c) {
      cin >> ci;
   }

   vector<ll> dp(x+1, 0);
   dp[0] = 1;
   for (int i=1; i<=x; i++) {
      for (int j=0; j<n; j++) {
         if (c[j] <= i) dp[i] += dp[i - c[j]];
      }
      dp[i] %= MOD;
   }
   cout << dp[x] << endl;

   return 0;
}