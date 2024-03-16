#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, m, k;
   cin >> n >> m >> k;

   vector<int> b(n), c(m);
   for (int &bi: b) cin >> bi;
   for (int &ci: c) cin >> ci;

   int ans = 0;
   for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
         if (b[i] + c[j] <= k) ans++;
      }
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