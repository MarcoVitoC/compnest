#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, m, k;
   cin >> n >> m >> k;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }
   m--;

   int minDist = 1e3;
   for (int i=m-1; i>=0; i--) {
      if (a[i] != 0 && a[i] <= k) {
         minDist = m - i;
         break;
      }
   }
   for (int i=m+1; i<n; i++) {
      if (a[i] != 0 && a[i] <= k) {
         minDist = min(minDist, i - m);
         break;
      }
   }
   cout << minDist * 10 << endl;

   return 0;
}