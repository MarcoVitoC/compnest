#include <bits/stdc++.h>
using namespace std;

void solve() {
   int b, p, f;
   cin >> b >> p >> f;

   int h, c;
   cin >> h >> c;

   int totalBurgers = b / 2;
   if (totalBurgers > p + f) {
      cout << p * h + f * c << endl;
      return;
   }

   int ans = 0;
   if (max(h, c) == h) {
      if (totalBurgers < p) {
         cout << totalBurgers * h << endl;
         return;
      }
      ans += (p * h);
      totalBurgers -= p;
      ans += (totalBurgers * c);
   } else {
      if (totalBurgers < f) {
         cout << totalBurgers * c << endl;
         return;
      }
      ans += (f * c);
      totalBurgers -= f;
      ans += (totalBurgers * h);
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