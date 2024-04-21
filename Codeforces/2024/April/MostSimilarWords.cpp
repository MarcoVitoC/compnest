#include <bits/stdc++.h>
using namespace std;

int difference(string a, string b) {
   int diff = 0;
   for (int i=0; i<a.length(); i++) {
      diff += abs(a[i] - b[i]);
   }

   return diff;
}

void solve() {
   int n, m;
   cin >> n >> m;

   vector<string> s(n);
   for (int i=0; i<n; i++) {
      cin >> s[i];
   }

   int ans = 1e3;
   for (int i=0; i<n; i++) {
      for (int j=i+1; j<n; j++) {
         ans = min(ans, difference(s[i], s[j]));
      }
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