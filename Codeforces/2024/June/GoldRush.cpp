#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool canMakeMGold(int n, int m) {
   if (n == m) return true;
   if (n % 3 != 0) return false;

   return canMakeMGold(n / 3, m) || canMakeMGold((n * 2) / 3, m);
}

void solve() {
   int n, m;
   cin >> n >> m;

   cout << (canMakeMGold(n, m) ? "YES" : "NO") << endl;
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