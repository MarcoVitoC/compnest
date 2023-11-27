#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   string num;
   cin >> num;

   string ans (n, ' ');
   if (num[0] != '9') {
      for (int i=0; i<n; i++) {
         ans[i] = ('9' - num[i]) + '0';
      }

      cout << ans << endl;
      return;
   }

   int borrow = 0;
   for (int i=n-1; i>=0; i--) {
      int subtractionResult = '1' - num[i] - borrow;
      if (subtractionResult >= 0) { // check if its possible to do (1 - 1) or (1 - 0) subtraction
         ans[i] = subtractionResult + '0';
         borrow = 0;
         continue;
      }
      ans[i] = (10 + subtractionResult) + '0';
      borrow = 1;
   }

   cout << ans << endl;
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