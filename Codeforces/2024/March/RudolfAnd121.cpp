#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) cin >> ai;

   for (int i=1; i<n-1; i++) {
      if (a[i] < 2) continue;

      while (a[i] >= 2 && a[i - 1] > 0 && a[i + 1] > 0) {
         int k = min({a[i - 1], a[i], a[i + 1]});
         a[i - 1] -= k, a[i] -= (2 * k), a[i + 1] -= k;
      }
   }

   for (int x: a) {
      if (x != 0) {
         cout << "NO" << endl;
         return;
      }
   }
   cout << "YES" << endl;
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