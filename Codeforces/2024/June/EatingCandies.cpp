#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> w(n);
   for (int &wi: w) cin >> wi;

   int a = 0, b = n - 1, wA = w[0], wB = w[n - 1], ans = 0;
   while (a < b) {
      if (wA == wB) ans = max(ans, (a + 1) + (n - b));

      if (wA <= wB) a++, wA += w[a];
      if (wB < wA) b--, wB += w[b];
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