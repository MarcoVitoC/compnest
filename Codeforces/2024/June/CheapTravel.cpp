#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int ceil(int a, int b) {
   return (a + (b - 1)) / b;
}

void solve() {
   int n, m, a, b;
   cin >> n >> m >> a >> b;

   if (n * a <= (n / m) * b) { // if one ride ticket's price for n rides is cheaper
      cout << n * a << endl;
      return;
   }

   if (n % m == 0) { // if bundle is cheaper and could cover n rides
      cout << (n / m) * b << endl;
      return;
   }
   
   int ans = (n / m) * b, r = n % m;
   cout << ans + min(r * a, ceil(r, m) * b) << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}