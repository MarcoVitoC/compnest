#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      ll l1, l2, l3;
      cin >> l1 >> l2 >> l3;

      if (l1 + l2 == l3 || l1 + l3 == l2 || l2 + l3 == l1) {
         cout << "YES" << endl;
      } else if ((l1 == l2 && l3 % 2 == 0) || (l1 == l3 && l2 % 2 == 0) || (l2 == l3 && l1 % 2 == 0)) {
         cout << "YES" << endl;
      } else {
         cout << "NO" << endl;
      }
   }

   return 0;
}