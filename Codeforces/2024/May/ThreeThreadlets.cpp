#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int a, b, c;
   cin >> a >> b >> c;

   if (a == b && b == c) {
      cout << "YES" << endl;
      return;
   }

   int minLength = min({a, b, c}), maxLength = max({a, b, c});
   int midLength = (a + b + c) - (maxLength + minLength);
   if (maxLength % minLength != 0 || midLength % minLength != 0) {
      cout << "NO" << endl;
      return;
   }

   int countCutMaxLength = (maxLength / minLength) - 1, countCutMidLength = (midLength / minLength) - 1;
   if (countCutMaxLength + countCutMidLength <= 3) {
      cout << "YES" << endl;
      return;
   }
   cout << "NO" << endl;
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