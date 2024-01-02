#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll INF = 1e12;

int findMinCost(int N, vector<int>& h) {
   vector<ll> dp(N+5, INF);
   dp[1] = abs(h[0] - h[1]);
   dp[2] = abs(h[0] - h[2]);
   for (int i=1; i<N-1; i++) {
      if (i + 1 < N) dp[i+1] = min(dp[i+1], dp[i] + abs(h[i+1] - h[i]));
      if (i + 2 < N) dp[i+2] = min(dp[i+2], dp[i] + abs(h[i+2] - h[i]));
   }

   return dp[N-1];
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N;
   cin >> N;

   vector<int> h(N+5);
   for (int i=0; i<N; i++) {
      cin >> h[i];
   }

   cout << findMinCost(N, h) << endl;

   return 0;
}