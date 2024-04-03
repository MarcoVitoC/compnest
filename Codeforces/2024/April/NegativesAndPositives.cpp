#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, negative = 0, minAbsValue = 1e9, k = 0;
   cin >> n;

   vector<int> a(n);
   for (int i=0; i<n; i++) {
      cin >> a[i];

      if (a[i] < 0) negative++;
      if (abs(a[i]) < minAbsValue) {
         minAbsValue = abs(a[i]);
         k = i;
      }
   }

   // if negative numbers is even, ans = abs(sum). Otherwise, ans = abs(sum) - smallest abs(a[i])
   ll ans = 0;
   for (int i=0; i<n; i++) {
      ans += (negative % 2 != 0 && i == k) ? -abs(a[k]) : abs(a[i]);
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