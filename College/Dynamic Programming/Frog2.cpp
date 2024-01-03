#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll INF = 1e12;

int getMinCost(int N, int K, vector<int>& h) {
   vector<ll> dp(N+5, INF);

   dp[0] = 0;
   for (int i=0; i<N-1; i++) {
      for (int j=1; j<=K; j++) {
         if (i + j < N) dp[i+j] = min(dp[i+j], dp[i] + abs(h[i+j] - h[i]));
      }
   }

   return dp[N-1];
}

int main() {
   int N, K;
   cin >> N >> K;

   vector<int> h(N);
   for (int i=0; i<N; i++) {
      cin >> h[i];
   }

   cout << getMinCost(N, K, h) << endl;
   
   return 0;
}