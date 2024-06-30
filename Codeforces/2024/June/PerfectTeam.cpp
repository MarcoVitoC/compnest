#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   int c, m, x;
   cin >> c >> m >> x;

   if (min(c, m) <= x) {
      cout << min(c, m) << endl;
      return;
   }

   c -= x;
   m -= x;
   cout << x + min(min(c, m), (c + m) / 3) << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int q;
   cin >> q;

   while (q--) {
      solve();
   }

   return 0;
}