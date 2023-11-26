#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<string> w(n-2);
   for (int i=0; i<n-2; i++) {
      cin >> w[i];
   }

   string ans = w[0];
   for (int i=1; i<w.size(); i++) {
      if (w[i][0] == ans[ans.length() - 1]) {
         ans += w[i][1];
         continue;
      }
      ans += w[i];
   }

   if (ans.length() < n) {
      ans += w[w.size() - 1][1];
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