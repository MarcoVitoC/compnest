#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, k, l, r, maxL = 0, minR = 1e3;
   cin >> n >> k;

   for (int i=0; i<n; i++) {
      cin >> l >> r;

      if (k >= l && k <= r) {
         maxL = max(maxL, l);
         minR = min(minR, r);
      }
   }
   
   cout << ((maxL == minR) ? "YES" : "NO") << endl;
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