#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   ll X;
   cin >> X;

   if ((X + 9) < 0 && (X + 9) % 10 != 0) {
      cout << ((X + 9) / 10) - 1 << endl;
   } else {
      cout << (X + 9) / 10 << endl;
   }

   return 0;
}