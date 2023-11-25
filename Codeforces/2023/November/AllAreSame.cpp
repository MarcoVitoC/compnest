#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
      int n;
      cin >> n;

      vector<int> a(n);
      int minValue = 1e7;
      for (int i=0; i<n; i++) {
         cin >> a[i];
         minValue = min(minValue, a[i]);
      }

      int ans = 0;
      for (int i=0; i<n; i++) {
         ans = __gcd(ans, a[i] - minValue);
      }

      cout << (ans == 0 ? -1 : ans) << endl;
   }

   return 0;
}