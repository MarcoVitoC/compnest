#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> p(n + 5);
   for (int i=1; i<=n; i++) {
      cin >> p[i];
   }

   int ans = 0;
   for (int i=1; i<=n; i++) {
      ans = __gcd(ans, abs(p[i] - i));
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