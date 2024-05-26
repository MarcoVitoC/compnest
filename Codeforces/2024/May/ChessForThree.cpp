#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int p1, p2, p3;
   cin >> p1 >> p2 >> p3;

   int sum = p1 + p2 + p3;
   if (sum % 2 != 0) {
      cout << -1 << endl;
      return;
   }

   // 2 cases:
   // -> p1 + p2 <= p3, means that p1 and p2 play with p3 and always draw
   // -> p1 + p2 > p3, means that all players would play in such a way that the scores would be equal to p1, p2, p3 
   cout << min(p1 + p2, sum / 2) << endl;
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