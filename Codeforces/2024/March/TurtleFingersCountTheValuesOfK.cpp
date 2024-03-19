#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int a, b, l, ans = 0;
   cin >> a >> b >> l;

   vector<int> d, axs, bys;
   for (int i=1; i<=sqrt(l); i++) {
      if (l % i == 0) {
         if (l / i == i) {
            d.push_back(i);
            continue;
         }
         d.push_back(i);
         d.push_back(l / i);
      }
   }
   for (int i=0; i<=20; i++) {
      ll pw = pow(a, i);
      if (pw > 1e6) break;
      axs.push_back(pw);
   }
   for (int i=0; i<=20; i++) {
      ll pw = pow(b, i);
      if (pw > 1e6) break;
      bys.push_back(pw);
   }

   for (int k: d) {
      bool isFound = false;
      for (int ax: axs) {
         for (int by: bys) {
            if (k * ax * by == l) {
               ans++;
               isFound = true;
               break;
            }
         }

         if (isFound) break;
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