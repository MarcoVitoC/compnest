#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n), b(105);
   for (int &ai: a) {
      cin >> ai;
      b[abs(ai)]++;
   }

   if (b[0] == n) {
      cout << 1 << endl;
      return;
   }

   int ans = 0;
   for (int i=1; i<=100; i++) {
      if (b[i] > 2) b[i] = 2;
      ans += b[i];
   }
   cout << ((b[0] > 0) ? ans + 1 : ans) << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}