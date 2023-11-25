#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, h;
   cin >> n >> h;

   vector<ll> a(n);
   for (int i=0; i<n; i++) {
      cin >> a[i];
   }

   ll l = 1, r = h, k = 1e18;
   while (l <= r) {
      ll mid = l + (r - l) / 2, initialDamage = 0;
      for (int i=1; i<n; i++) {
         initialDamage += min(mid, a[i] - a[i-1]);
      }
      initialDamage += mid;

      if (initialDamage >= h) {
         k = min(k, mid);
         r = mid - 1;
      } else {
         l = mid + 1;
      }
   }

   cout << k << endl;
}

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}