#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, q, a;
   cin >> n >> q;

   vector<int> ps(n);
   for (int i=0; i<n; i++) {
      cin >> a;
      ps[i] = (i == 0) ? a : ps[i - 1] + a;
   }

   int l, r, k;
   while (q--) {
      cin >> l >> r >> k;

      int rangeSum = (l == 1) ? ps[r - 1] : ps[r - 1] - ps[l - 2];
      int sum = (ps[n - 1] - rangeSum) + (k * (r - l + 1));
      
      cout << ((sum % 2 != 0) ? "YES" : "NO") << endl;
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