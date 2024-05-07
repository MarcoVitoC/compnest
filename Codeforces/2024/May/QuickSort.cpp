#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, k, p, x = 1, w = 0;
   cin >> n >> k;

   for (int i=0; i<n; i++) {
      cin >> p;

      if (p == x) x++, w++;
   }

   cout << ceil((n * 1.0 - w * 1.0) / k) << endl;
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