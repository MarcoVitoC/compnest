#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
   ll a, b;
   cin >> a >> b;

   ll ans = 1;
   while (b > 0) {
      if (b % 2 != 0) ans = (ans * a) % MOD;
      a = (a * a) % MOD;
      b /= 2;
   }

   cout << ans << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   while (n--) {
      solve();
   }

   return 0;
}