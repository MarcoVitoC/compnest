#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> d(n), ans;
   for (int i=0; i<n; i++) {
      cin >> d[i];
   }

   ans.push_back(d[0]);
   for (int i=1; i<n; i++) {
      if (d[i] == 0) {
         ans.push_back(d[i] + ans[i-1]);
      } else {
         if (ans[i-1] - d[i] >= 0 && ans[i-1] + d[i] >= 0) {
            cout << -1 << endl;
            return;
         }
         ans.push_back(ans[i-1] + d[i]);
      }
   }

   for (int a: ans) {
      cout << a << " ";
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