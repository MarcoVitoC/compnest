#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   string S, T;
   cin >> S >> T;

   int sLen = S.length(), tLen = T.length(), k = 0;
   for (int i=0; i<tLen; i++) {
      if (T[i] == 'X' && i == tLen - 1) continue;

      int oldK = k;
      for (int j=k; j<sLen; j++) {
         if (S[j] == T[i] + 32) {
            k = j + 1;
            break;
         }
      }

      if (oldK == k) {
         cout << "No" << endl;
         return;
      }
   }
   cout << "Yes" << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}