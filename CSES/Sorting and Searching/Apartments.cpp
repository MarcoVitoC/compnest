#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m, k;
   cin >> n >> m >> k;

   vector<int> a(n), b(m);
   for (int &ai: a) {
      cin >> ai;
   }
   for (int &bi: b) {
      cin >> bi;
   }

   sort(a.begin(), a.end());
   sort(b.begin(), b.end());

   int ans = 0, up = 0, lp = 0;
   while (up < n && lp < m) {
      if (b[lp] >= a[up] - k && b[lp] <= a[up] + k) {
         ans++, up++, lp++;
      } else if (b[lp] < a[up] - k) {
         lp++;
      } else if (b[lp] > a[up] + k) {
         up++;
      }
   }
   cout << ans << endl;

   return 0;
}