#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, ans = 0, a = 1;;
   cin >> n;

   if (n == 1) {
      cout << 0 << endl;
      return;
   }

   while (a * a <= n) a++;
   --a;

   int div = (n % a == 0) ? n / a : (n / a) + 1;
   ans = (a - 1) + ((div) - 1);
   
   cout << ans << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}