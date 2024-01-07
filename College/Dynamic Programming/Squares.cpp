#include <bits/stdc++.h>
using namespace std;

const int INF = 1e5;

vector<int> dp(INF);

void preComputeTerms() {
   for (int i=0; i<=INF; i++) {
      dp[i] = INF;
   }

   dp[0] = 0;
   for (int i=1; i<=100; i++) {
      for (int j=i*i; j<=10000; j++) {
         dp[j] = min(dp[j], dp[j - i*i] + 1);
      }
   }
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   preComputeTerms();
   while (t--) {
      int N;
      cin >> N;

      cout << dp[N] << endl;
   }

   return 0;
}