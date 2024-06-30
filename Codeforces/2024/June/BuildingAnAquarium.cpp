#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   int n, x;
   cin >> n >> x;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   int l = 0, r = 2 * 1e9, ans = 1;
   while (l <= r) {
      int m = l + (r - l) / 2;

      ll w = 0;
      for (int i=0; i<n; i++) {
         w += max(m - a[i], 0);
      }

      if (w <= x) {
         ans = max(ans, m);
         l = m + 1;
      } else {
         r = m - 1;
      }
   }
   cout << ans << endl;
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