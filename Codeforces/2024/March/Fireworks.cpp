#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll a, b, m;
   cin >> a >> b >> m;

   ll x = (((m + a * (m / a)) - m) / a) + 1;
   ll y = (((m + b * (m / b)) - m) / b) + 1;
   
   cout << x + y << endl;
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