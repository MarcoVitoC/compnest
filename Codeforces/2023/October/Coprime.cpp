#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   
   int t;
   cin >> t;

   while (t--) {
      int n, a;
      cin >> n;

      map<int, int> mp;
      for (int i=1; i<=n; i++) {
         cin >> a;
         mp[a] = i;
      }

      int ans = -1;
      for (int i=1; i<=1000; i++) {
         for (int j=i; j<=1000; j++) {
            if (mp[i] && mp[j] && __gcd(i, j) == 1) {
               ans = max(ans, mp[i] + mp[j]);
            }
         }
      }

      cout << ans << endl;
   }

   return 0;
}