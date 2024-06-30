#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll a, b, n, x;
   cin >> a >> b >> n;

   for (int i=0; i<n; i++) {
      cin >> x;
      b += min(a - 1, x);
   }
   cout << b << endl;
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