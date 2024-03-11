#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int i=0; i<n; i++) {
      cin >> a[i];

      if (i % 2 != 0) a[i] *= -1; // use alternating prefix sum
   }

   vector<ll> ps(n);
   ps[0] = a[0];
   for (int i=1; i<n; i++) {
      ps[i] = ps[i - 1] + a[i];
   }

   map<ll, int> cnt;
   for (ll x: ps) {
      if (x == 0 || ++cnt[x] > 1) {
         cout << "YES" << endl;
         return;
      }
   }

   cout << "NO" << endl;
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