#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, x, y;
   cin >> n >> x >> y;

   if (max(x, y) == 0 || min(x, y) != 0 || ((n - 1) % max(x, y) != 0)) {
      cout << -1 << endl;
      return;
   }

   for (int i=2; i<=n; i+=max(x, y)) {
      for (int j=1; j<=max(x, y); j++) {
         cout << i << " ";
      }
   }
   cout << endl;
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