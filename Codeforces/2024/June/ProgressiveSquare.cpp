#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, c, d;
   cin >> n >> c >> d;

   int mn = 1e9;
   vector<int> b(n*n);
   for (int &bi: b) {
      cin >> bi;
      mn = min(mn, bi);
   }

   vector<int> a(n*n);
   map<int, int> mp;
   a[0] = mn;
   mp[mn]++;
   for (int i=1; i<n*n; i++) {
      a[i] = (i % n == 0) ? a[i - n] + c : a[i - 1] + d;
      mp[a[i]]++;
   }

   for (int x: b) {
      if (mp[x] == 0) {
         cout << "NO" << endl;
         return;
      }
      mp[x]--;
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