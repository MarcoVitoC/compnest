#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   ll sum = 0;
   for (int i=0; i<n; i++) {
      cin >> a[i];
      sum += a[i];
   }

   if ((2 * sum) % n != 0) {
      cout << 0 << endl;
      return;
   }

   ll k = (2 * sum) / n, ans = 0;
   map<int, int> mp;
   for (int i=0; i<n; i++) {
      if (mp.count(k - a[i])) ans += mp[k - a[i]];
      mp[a[i]]++;
   }

   cout << ans << endl;
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