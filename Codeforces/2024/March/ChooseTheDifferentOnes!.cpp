#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, m, k, a, b;
   cin >> n >> m >> k;

   set<int> sa, sb;
   for (int i=0; i<n; i++) {
      cin >> a;
      if (a <= k) sa.insert(a);
   }
   for (int i=0; i<m; i++) {
      cin >> b;
      if (b <= k) sb.insert(b);
   }

   int onlyOccurInA = 0, onlyOccurInB = 0, occurInBoth = 0;
   for (auto &num: sa) {
      if (!sb.count(num)) onlyOccurInA++;
      else occurInBoth++;
   }
   for (auto &num: sb) {
      if (!sa.count(num)) onlyOccurInB++;
   }

   if (onlyOccurInA > k / 2 || onlyOccurInB > k / 2 || onlyOccurInA + onlyOccurInB + occurInBoth < k) {
      cout << "NO" << endl;
      return;
   }
   cout << "YES" << endl;
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