#include <bits/stdc++.h>
using namespace std;

void solve() {
   int m, b = 0;
   cin >> m;

   vector<vector<char>> c(2, vector<char>(m));
   for (int i=0; i<2; i++) {
      for (int j=0; j<m; j++) {
         cin >> c[i][j];

         if (c[i][j] == 'B') b++;
      }
   }

   int pos = -1;
   for (int i=0; i<m; i++) {
      if (c[0][i] == 'W' && c[1][i] == 'W') break;
      if (c[0][i] == 'B' && c[1][i] == 'B') {
         if (pos == 0) pos = 1;
         else if (pos == 1) pos = 0;
         b -= 2;
      }
      if (c[0][i] == 'B' && c[1][i] == 'W') {
         if (pos == 1) break;
         pos = 0, b--;
      }
      if (c[0][i] == 'W' && c[1][i] == 'B') {
         if (pos == 0) break;
         pos = 1, b--;
      }
   }

   cout << ((b > 0) ? "NO" : "YES") << endl;
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