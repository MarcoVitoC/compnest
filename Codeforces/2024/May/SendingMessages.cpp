#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, f, a, b;
   cin >> n >> f >> a >> b;

   vector<int> m(n);
   m.push_back(0);
   for (int i=1; i<=n; i++) {
      cin >> m[i];
   }

   for (int i=0; i<n; i++) {
      ll diff = abs(m[i] - m[i + 1]);

      f -= min(diff * a, b);
      if (f <= 0) {
         cout << "NO" << endl;
         return;
      }
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