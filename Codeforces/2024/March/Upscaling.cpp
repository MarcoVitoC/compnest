#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, x = 0;
   cin >> n;

   vector<vector<char>> c(2*n+1, vector<char>(2*n+1));
   for (int i=1; i<=2*n; i+=2) {
      int y = 0;
      for (int j=1; j<=2*n; j+=2) {
         if ((i - x) % 2 != 0) {
            c[i][j] = c[i][j+1] = c[i+1][j] = c[i+1][j+1] = ((j - y) % 2 != 0) ? '#' : '.';
         } else {
            c[i][j] = c[i][j+1] = c[i+1][j] = c[i+1][j+1] = ((j - y) % 2 == 0) ? '#' : '.';
         }
         y++;
      }
      x++;
   }

   for (int i=1; i<=2*n; i++) {
      for (int j=1; j<=2*n; j++) {
         cout << c[i][j];
      }
      cout << endl;
   }
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