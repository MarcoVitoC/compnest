#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int W, B;
   cin >> W >> B;

   string S = "wbwbwwbwbwbw";
   int len = S.length();
   for (int i=0; i<len; i++) {
      int cntW = 0, cntB = 0;
      for (int j=0; j<W+B; j++) {
         if (S[(i + j) % len] == 'w') cntW++;
         if (S[(i + j) % len] == 'b') cntB++;
      }

      if (cntW == W && cntB == B) {
         cout << "Yes" << endl;
         return;
      }
   }
   cout << "No" << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}