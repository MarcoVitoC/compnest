#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, a, b;
   cin >> n >> a >> b;

   if (n % 2 == 0) {
      cout << min(2 * a, b) * (n / 2) << endl;
   } else {
      cout << min(2 * a, b) * ((n - 1) / 2) + a << endl;
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