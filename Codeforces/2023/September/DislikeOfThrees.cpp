#include <iostream>

using namespace std;

void solve() {
   int k;
   cin >> k;

   int ans = 0;
   while (k != 0) {
      ans++;
      if (ans % 3 == 0 || ans % 10 == 3) continue;
      k--;
   }
   
   cout << ans << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}