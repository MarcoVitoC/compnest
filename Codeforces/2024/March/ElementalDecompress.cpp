#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n), p(n, -1), q(n, -1);
   set<int> ps, qs;
   for (int i=0; i<n; i++) {
      cin >> a[i];

      ps.insert(i + 1);
      qs.insert(i + 1);
   }

   for (int i=0; i<n; i++) {
      if (ps.count(a[i])) {
         ps.erase(a[i]);
         p[i] = a[i];
      } else if (qs.count(a[i])) {
         qs.erase(a[i]);
         q[i] = a[i];
      } else {
         cout << "NO" << endl;
         return;
      }
   }

   for (int i=0; i<n; i++) {
      if (q[i] == -1) {
         auto itr = qs.upper_bound(p[i]);
         if (itr == qs.begin()) {
            cout << "NO" << endl;
            return;
         }

         --itr;
         q[i] = *itr;
         qs.erase(itr);
      } else if (p[i] == -1) {
         auto itr = ps.upper_bound(q[i]);
         if (itr == ps.begin()) {
            cout << "NO" << endl;
            return;
         }

         --itr;
         p[i] = *itr;
         ps.erase(itr);
      }
   }

   cout << "YES" << endl;
   for (int x: p) {
      cout << x << " ";
   }
   cout << endl;
   for (int x: q) {
      cout << x << " ";
   }
   cout << endl;
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