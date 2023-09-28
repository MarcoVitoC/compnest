#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber[1000005] = {false};

bool preCompute(long long num) {
   for (int i=2; i<=num; i++) {
      isPrimeNumber[i] = true;
   }

   for (long long i=2; i*i<=num; i++) {
      if (isPrimeNumber[i]) {
         for (long long j=i*i; j<=num; j+=i) {
            isPrimeNumber[j] = false;
         }
      }
   }
}

int main() {
   preCompute(1000000);

   int n;
   cin >> n;

   long long x;
   for (int i=0; i<n; i++) {
      cin >> x;

      double sq = sqrt(x);
      if (sq - (int)sq == 0) { // check if x is a perfect square number (e.g. 4, 9, 16, 25, 36, 49, etc)
         if (isPrimeNumber[(int)sq]) {
            cout << "YES" << endl;
         } else {
            cout << "NO" << endl;
         }
      } else {
         cout << "NO" << endl;
      }
   }

   return 0;
}