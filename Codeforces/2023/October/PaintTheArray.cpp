#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
      int n;
      cin >> n;

      vector<ll> a(n);
      for (int i=0; i<n; i++) {
         cin >> a[i];
      }

      ll oddGcd = 0, evenGcd = 0;
      for (int i=0; i<n; i++) {
         if (i % 2 == 0) {
            evenGcd = __gcd(evenGcd, a[i]);
         } else {
            oddGcd = __gcd(oddGcd, a[i]);
         }
      } 

      bool isDivisibleOdd = false, isDivisibleEven = false;
      for (int i=0; i<n; i+=2) {
         if (a[i] % oddGcd == 0) {
            isDivisibleOdd = true;
            break;
         }
      }
      for (int i=1; i<n; i+=2) {
         if (a[i] % evenGcd == 0) {
            isDivisibleEven = true;
            break;
         }
      }

      if (isDivisibleEven && isDivisibleOdd) {
         cout << 0 << endl;
      } else if (isDivisibleEven) {
         cout << oddGcd << endl;
      } else {
         cout << evenGcd << endl;
      }
   }

   return 0;
}