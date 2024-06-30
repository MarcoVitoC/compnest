#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, p = 0;
   cin >> n;

   while (5 * (1 << p) < n) {
      n -= (5 * (1 << p)); // to find in which round n is
      p++;
   }

   int ans = (n - 1) / (1 << p); // find the order of n-th in round 2^p
   if (ans == 0) {
      cout << "Sheldon" << endl;
   } else if (ans == 1) {
      cout << "Leonard" << endl;
   } else if (ans == 2) {
      cout << "Penny" << endl;
   } else if (ans == 3) {
      cout << "Rajesh" << endl;
   } else if (ans == 4 ) {
      cout << "Howard" << endl;
   }

   return 0;
}