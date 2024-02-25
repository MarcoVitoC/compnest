#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
      ll r, g, b;
      cin >> r >> g >> b;

      ll mx = max(r, max(g, b)), mn = min(r, min(g, b));
      ll mid = (r + g + b) - mx - mn;
      
      cout << ((mid + mn <= mx) ? mid + mn : (r + g + b) / 2) << endl;
   }

   return 0;
}