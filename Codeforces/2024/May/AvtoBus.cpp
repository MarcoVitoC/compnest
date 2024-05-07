#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n;
   cin >> n;

   if (n == 2 || (n % 10) % 2 != 0) {
      cout << -1 << endl;
      return;
   }

   cout << n / 6 + (n % 6 != 0) << " " << n / 4 << endl;
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