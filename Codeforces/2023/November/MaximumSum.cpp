#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   vector<int> a(n);
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }
   sort(a.begin(), a.end());

   vector<ll> prefixSum(n);
   prefixSum[0] = a[0];
   for (int i=1; i<n; i++) {
      prefixSum[i] = prefixSum[i-1] + a[i];
   }

   ll ans = prefixSum[n - k - 1];
   for (int i=1; i<=k; i++) {
      ans = max(ans, prefixSum[n - k + i - 1] - prefixSum[(i * 2) - 1]);
   }

   cout << ans << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}