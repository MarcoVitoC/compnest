#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, a;
   cin >> n;

   for (int i=0; i<n; i++) {
      cin >> a;
   }

   int k = 1;
   for (int i=2; i<10-n; i++) k += i;
   cout << 6 * k << endl;
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