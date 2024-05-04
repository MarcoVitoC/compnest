#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll x, y;
   cin >> x >> y;

   cout << ((x - y == 1) ? "NO" : "YES") << endl;
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