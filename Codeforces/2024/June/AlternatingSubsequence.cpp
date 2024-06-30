#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<ll> a(n);
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }

   ll ans = 0, mx = a[0];
   for (int i=1; i<n; i++) { // sum all the maximum values from each group of numbers with the same sign
      if ((a[i - 1] > 0 && a[i] > 0) || (a[i - 1] < 0 && a[i] < 0)) {
         mx = max(mx, a[i]);
         continue;
      }

      ans += mx;
      mx = a[i];
   }
   cout << ans + mx << endl;
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