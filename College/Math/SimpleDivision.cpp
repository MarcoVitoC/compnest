#include <bits/stdc++.h>
using namespace std;

int main() {
   while (1) {
      int a[1005], n = 0, gcd = 0;
      for (int i=0; i<1000; i++) {
         cin >> a[i];
         ++n;
         if (a[i] == 0) break;
      }

      if (a[0] == 0) break;

      for (int i=0; i<n-2; i++) {
         gcd = __gcd(gcd, abs(a[i] - a[i+1]));
      }
      cout << gcd << endl;
   }
   
   return 0;
}