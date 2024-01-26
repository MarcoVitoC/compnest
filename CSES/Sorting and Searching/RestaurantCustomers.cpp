#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, a, b;
   cin >> n;

   vector<pair<int, int>> vp;
   for (int i=0; i<n; i++) {
      cin >> a >> b;
      vp.push_back({a, 1});
      vp.push_back({b, -1});
   }
   sort(vp.begin(), vp.end());

   int currCustomer = 0, maxCustomer = 0;
   for (auto p: vp) {
      currCustomer += p.second;
      maxCustomer = max(maxCustomer, currCustomer);
   }
   cout << maxCustomer << endl;

   return 0;
}