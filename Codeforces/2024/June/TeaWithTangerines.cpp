#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) cin >> ai;

   int ans = 0, minPieceSize = 2 * a[0] - 1;
   for (int i=0; i<n; i++) {
      ans += (a[i] - 1) / minPieceSize;
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