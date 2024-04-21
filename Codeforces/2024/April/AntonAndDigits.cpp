#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int k2, k3, k5, k6;
   cin >> k2 >> k3 >> k5 >> k6;

   int n256 = min({k2, k5, k6});
   int n32 = min(k2 - n256, k3);
   cout << 256 * n256 + 32 * n32 << endl;

   return 0;
}