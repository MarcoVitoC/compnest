#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n;
   cin >> n;

   ll ans = 1;
   while (n % ans == 0) ans++;
   cout << ans - 1 << endl;
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