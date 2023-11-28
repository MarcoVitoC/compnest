#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   int a = 1; // initialize to 1, in case n is a prime number
   for (int i=2; i*i<=n; i++) {
      if (n % i == 0) {
         a = n / i;
         break;
      }
   }

   cout << a << " " << n - a << endl;
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