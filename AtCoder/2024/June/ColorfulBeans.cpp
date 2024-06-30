#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N, A, C;
   cin >> N;

   map<int, int> mp;
   while (N--) {
      cin >> A >> C;
      mp[C] = (mp[C] == 0) ? A : min(A, mp[C]);
   }

   int ans = 0;
   for (auto [color, minDelicousness]: mp) {
      ans = max(ans, minDelicousness);
   }
   cout << ans << endl;

   return 0;
}