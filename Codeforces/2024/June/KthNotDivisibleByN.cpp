#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   ll n, k;
   cin >> n >> k;

   ll l = 1, r = 1e18;
   while (l <= r) {
      ll m = l + (r - l) / 2;

      ll cntNotDivisible = m - (m / n);
      if (cntNotDivisible == k && m % n != 0) {
         cout << m << endl;
         return;
      } else if (cntNotDivisible >= k) {
         r = m - 1;
      } else {
         l = m + 1;
      }
   }
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