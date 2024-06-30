#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   vector<vector<char>> g(8, vector<char>(8));
   for (int i=0; i<8; i++) {
      for (int j=0; j<8; j++) {
         cin >> g[i][j];
      }
   }

   int cntR;
   for (int i=0; i<8; i++) {
      cntR = 0;
      for (int j=0; j<8; j++) {
         if (g[i][j] == 'R') cntR++;
      }

      if (cntR == 8) {
         cout << 'R' << endl;
         return;
      }
   }
   cout << 'B' << endl;
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