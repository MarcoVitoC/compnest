#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, mn = 1e5, mx = 0;
   cin >> n;

   vector<int> a(n);
   map<int, ll> cnt;
   for (int &ai: a) {
      cin >> ai;

      cnt[ai]++;
      mn = min(mn, ai);
      mx = max(mx, ai);
   }

   cout << ((mn == mx) ? cnt[mx] * (cnt[mx] - 1) : cnt[mn] * cnt[mx] * 2) << endl;
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