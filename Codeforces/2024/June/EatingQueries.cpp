#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int binarySearch(vector<int>& ps, int x) {
   int l = 0, r = ps.size() - 1, ans = -1;
   while (l <= r) {
      int m = l + (r - l) / 2;

      if (ps[m] >= x) {
         ans = m + 1;
         r = m - 1;
      } else {
         l = m + 1;
      }
   }

   return ans;
}

void solve() {
   int n, q, x;
   cin >> n >> q;

   vector<int> a(n);
   for (int &ai: a) cin >> ai;
   sort(all(a), greater<int>());

   vector<int> ps(n);
   ps[0] = a[0];
   for (int i=1; i<n; i++) {
      ps[i] = ps[i - 1] + a[i];
   }

   while (q--) {
      cin >> x;

      cout << binarySearch(ps, x) << endl;
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