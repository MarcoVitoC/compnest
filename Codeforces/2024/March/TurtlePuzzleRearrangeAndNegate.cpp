#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, a, sum = 0;
   cin >> n;

   while (n--) {
      cin >> a;

      if (a < 0) a *= -1;
      sum += a;
   }
   cout << sum << endl;
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