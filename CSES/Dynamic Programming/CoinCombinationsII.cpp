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
   for (int i=0; i<n; i++) {
      for (int j=1; j<=x; j++) {
         if (c[i] <= j) dp[j] += dp[j - c[i]];
         dp[j] %= MOD;
      }
   }
   cout << dp[x] << endl;

   return 0;
}