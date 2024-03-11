#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   ll l, r, x, y, ans = 0;
   cin >> l >> r >> x >> y;

   for (ll a=x; a*a<=x*y; a+=x) {
      if ((x * y) % a != 0) continue;

      ll b = (x * y) / a;
      if (a >= l && a <= r && b >= l && b <= r) {
         if (gcd(a, b) == x) ans += 1 + (a != b);
      }
   }
   cout << ans << endl;

   return 0;
}