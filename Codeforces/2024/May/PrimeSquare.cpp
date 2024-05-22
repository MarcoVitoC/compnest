#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   for (int i=1; i<=n; i++) {
      for (int j=1; j<=n; j++) {
         // print cycle shift one
         cout << ((j == i || j == i + 1 || (i == n && j == 1)) ? 1 : 0) << " ";
      }
      cout << endl;
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