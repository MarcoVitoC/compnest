#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   /* Sum from 1 to 2n must be the same as sum of each pair -> n (2n + 1) = (2k + n - 1) / 2.
      From the above equation, we get (3n + 3) / 2 = k, where k is the smallest possible sum of pair. */

   if (n % 2 == 0) {
      cout << "No" << endl;
      return;
   }

   cout << "Yes" << endl;
   int m = 2 * n;
   for (int i=1; i<=n; i+=2) {
      cout << i << " " << m-- << endl;
   }
   for (int i=2; i<=n; i+=2) {
      cout << i << " " << m-- << endl;
   }
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}