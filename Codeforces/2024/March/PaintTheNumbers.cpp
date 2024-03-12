#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   vector<int> a(n), d;
   for (int &ai: a) {
      cin >> ai;
   }
   sort(a.begin(), a.end());

   d.push_back(a[0]);
   for (int x: a) {
      bool isDivisible = false;
      for (int dv: d) {
         if (x % dv == 0) {
            isDivisible = true;
            break;
         }
      }

      if (!isDivisible) d.push_back(x);
   }
   cout << d.size() << endl;

   return 0;
}