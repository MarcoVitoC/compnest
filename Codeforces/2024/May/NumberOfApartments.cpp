#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   if (n == 1 || n == 2 || n == 4) {
      cout << -1 << endl;
      return;
   }

   int x = n % 3;
   if (x == 0) { // n = [3, 6, 9, 12, 15, 18, ...]
      cout << n / 3 << " " << 0 << " " << 0 << endl;
   } else if (x == 2) { // n = [5, 8, 11, 14, 17, 20, ...]
      cout << (n - 5) / 3 << " " << 1 << " " << 0 << endl;
   } else if (x == 1) { // n = [7, 10, 13, 16, 19, 22, ...]
      cout << (n - 7) / 3 << " " << 0 << " " << 1 << endl;
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