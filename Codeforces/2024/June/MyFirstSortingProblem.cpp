#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int x, y;
   cin >> x >> y;

   cout << min(x, y) << " " << max(x, y) << endl;
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