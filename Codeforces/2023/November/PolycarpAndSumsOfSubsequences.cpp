#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      int b1, b2, b3, b4, b5, b6, b7;
      cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7;

      cout << b1 << " " << b2 << " " << b7 - b1 - b2 << endl;
   }

   return 0;
}