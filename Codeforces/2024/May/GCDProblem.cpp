#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   for (int a=2; a<n-2; a++) {
      int b = n - a - 1;
      if (gcd(a, b) == 1 && a + b + 1 == n) {
         cout << a << " " << b << " " << 1 << endl;
         return;
      }
   }
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