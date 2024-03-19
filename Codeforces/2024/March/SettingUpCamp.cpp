#include <bits/stdc++.h>
using namespace std;

void solve() {
   int a, b, c;
   cin >> a >> b >> c;

   if (b % 3 != 0 && (b % 3) + c < 3) {
      cout << -1 << endl;
      return;
   }

   if (b % 3 != 0) {
      c += (b % 3);
      b -= (b % 3);
   }
   cout << a + (b / 3) + ((c / 3) + (c % 3 != 0)) << endl;
   
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