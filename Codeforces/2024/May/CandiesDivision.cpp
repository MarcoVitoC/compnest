#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   int x = n - n % k;
   cout << x + min(n % k, k / 2) << endl;
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