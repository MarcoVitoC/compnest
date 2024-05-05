#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n;
   cin >> n;

   if (n == 3) {
      cout << "NO" << endl;
      return;
   }

   cout << "YES" << endl;
   int k = (n - 1) / 2;
   for (int i=0; i<n; i++) {
      if (n % 2 == 0) {
         cout << ((i % 2 == 0) ? 1 : -1) << " ";
         continue;
      }
      
      cout << ((i % 2 == 0) ? k - 1 : -k) << " ";
   }
   cout << endl;
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