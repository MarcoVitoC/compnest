#include <bits/stdc++.h>
using namespace std;

void solve() {
   int m, k, n;
   cin >> m >> k >> n;

   int cntMostFrequentColor = (m / k) + (m % k != 0);
   int remainingUncoloredPart = m - cntMostFrequentColor;
   cout << ((n >= remainingUncoloredPart) ? "NO" : "YES") << endl;
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