#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n), b(n);
   for (int &ai: a) cin >> ai;
   for (int &bi: b) cin >> bi;

   int l = 0, r = n - 1;
   while (l < n && a[l] == b[l]) l++;
   while (r >= 0 && a[r] == b[r]) r--;
   
   int diff = b[l] - a[l];
   for (int i=l; i<=r; i++) {
      if (diff <= 0 || b[i] - a[i] != diff) {
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