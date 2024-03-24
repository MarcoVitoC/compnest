#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   string s;
   cin >> s;

   vector<int> ps(n+5);
   ps[0] = 0;
   for (int i=1; i<=n; i++) {
      ps[i] = ps[i - 1] + (s[i - 1] - '0'); // count the total residents on the right side
   }

   int ans = 0;
   double minDistToMid = n * 1.0;
   for (int i=0; i<=n; i++) {
      double currDistToMid = abs(n * 1.0 / 2 - i);
      int leftResidents = i - ps[i], rightResidents = ps[n] - ps[i];
      int leastLeftResidents = (i + 1) / 2, leastRightResidents = (n - i + 1) / 2;
      
      if (leftResidents >= leastLeftResidents && rightResidents >= leastRightResidents && currDistToMid < minDistToMid) {
         minDistToMid = currDistToMid;
         ans = i;
      }
   }
   cout << ans << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}