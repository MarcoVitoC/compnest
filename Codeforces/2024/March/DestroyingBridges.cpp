#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   cout << ((k >= n - 1) ? 1 : n) << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}