#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   bool isAllSame = true;
   for (int i=0; i<n; i++) {
      cin >> a[i];

      if (i > 0 && a[i] != a[i - 1]) {
         isAllSame = false;
      }
   }

   if (isAllSame) {
      cout << 0 << endl;
      return;
   }

   int cntLeft = 1, cntRight = 1;
   for (int i=0; i<n; i++) {
      if (a[i] != a[i + 1]) break;
      cntLeft++;
   }
   for (int i=n-1; i>0; i--) {
      if (a[i] != a[i - 1]) break;
      cntRight++;
   }
   cout << ((a[0] == a[n - 1]) ? n - (cntLeft + cntRight) : n - max(cntLeft, cntRight) ) << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}