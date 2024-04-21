#include <bits/stdc++.h>
using namespace std;

void solve() {
   int a, b, n;
   cin >> a >> b >> n;

   int ans = 0;
   while (max(a, b) <= n) {
      if (a <= b) {
         a += b;
      } else {
         b += a;
      }

      ans++;
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