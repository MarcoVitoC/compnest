#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, k;
   cin >> n >> k;

   ll ans = 0;
   while (n != 0) {
      if (n % k == 0) {
         n /= k;
         ans++;
         continue;
      }

      ans += (n % k);
      n -= (n % k);
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