#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m, h;
   cin >> n >> m;

   multiset<int> tickets;
   for (int i=0; i<n; i++) {
      cin >> h;
      tickets.insert(h);
   }

   vector<int> t(m);
   for (int &ti: t) {
      cin >> ti;
   }

   for (int ti: t) {
      auto it = tickets.upper_bound(ti);

      if (it == tickets.begin()) {
         cout << -1 << endl;
         continue;
      }

      cout << *(--it) << endl;
      tickets.erase(it);
   }

   return 0;
}