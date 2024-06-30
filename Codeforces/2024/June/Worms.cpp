#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int binarySearch(vector<int>& ps, int q) {
   int l = 0, r = ps.size() - 1, ans = 0;
   while (l <= r) {
      int m = l + (r - l) / 2;

      if (ps[m] >= q) {
         ans = m;
         r = m - 1;
      } else {
         l = m + 1;
      }
   }

   return ans;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, a;
   cin >> n;

   vector<int> ps(n);
   for (int i=0; i<n; i++) {
      cin >> a;
      ps[i] = (i == 0) ? a : ps[i - 1] + a;
   }

   int m, q;
   cin >> m;

   while (m--) {
      cin >> q;
      cout << binarySearch(ps, q) + 1 << endl;
   }

   return 0;
}