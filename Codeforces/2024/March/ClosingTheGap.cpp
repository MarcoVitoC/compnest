#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   int a, sum = 0;
   for (int i=0; i<n; i++) {
      cin >> a;
      sum += a;
   }

   cout << ((sum % n == 0) ? 0 : 1) << endl;
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