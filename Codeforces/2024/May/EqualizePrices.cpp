#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   vector<int> a(n);
   int mn = 1e8;
   for (int &ai: a) {
      cin >> ai;
      mn = min(mn, ai);
   }

   int B = mn + k;
   for (int x: a) {
      if (abs(B - x) > k) {
         cout << -1 << endl;
         return;
      }
   }
   cout << B << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int q;
   cin >> q;

   while (q--) {
      solve();
   }

   return 0;
}