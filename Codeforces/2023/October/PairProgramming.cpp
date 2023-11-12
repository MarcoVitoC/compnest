#include <bits/stdc++.h>
using namespace std;

void solve() {
   int k, n, m;
   cin >> k >> n >> m;

   vector<int> a(n), b(m), res;
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }

   for (int i=0; i<m; i++) {
      cin >> b[i];
   }

   int i = 0, j = 0;
   while (i < n || j < m) {
      if (i < n && a[i] == 0) {
         res.push_back(0);
         k++, i++;
      } else if (j < m && b[j] == 0) {
         res.push_back(0);
         k++, j++;
      } else if (i < n && a[i] <= k) {
         res.push_back(a[i++]);
      } else if (j < m && b[j] <= k) {
         res.push_back(b[j++]);
      } else {
         cout << -1 << endl;
         return;
      }
   }

   for (int num: res) {
      cout << num << " ";
   }
   cout << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}