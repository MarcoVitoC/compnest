#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll power(ll A, ll B, ll C) {
   if (B == 1) return A % C;
   if (B % 2 == 0) {
      return (power(A, B / 2, C) * power(A, B / 2, C)) % C;
   } else {
      return (power(A, B / 2, C) * power(A, B / 2, C) * A) % C;
   }
}

int main() {
   ll A, B, C;
   cin >> A >> B >> C;

   cout << power(A, B, C) << endl;

   return 0;
}