#include <bits/stdc++.h>
using namespace std;

void solve() {
   int a, b;
   cin >> a >> b;

   int xk, yk;
   cin >> xk >> yk;

   int xq, yq;
   cin >> xq >> yq;

   vector<pair<int, int>> directions = {{a, b}, {-a, b}, {a, -b}, {-a, -b}, {b, a}, {-b, a}, {b, -a}, {-b, -a}};
   set<pair<int, int>> kAttackPos, qAttackPos;
   for (auto d: directions) {
      int x = xk + d.first, y = yk + d.second;
      kAttackPos.insert({x, y});

      x = xq + d.first, y = yq + d.second;
      qAttackPos.insert({x, y});
   }

   int ans = 0;
   for (auto pos: kAttackPos) {
      if (qAttackPos.find(pos) != qAttackPos.end()) ans++;
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