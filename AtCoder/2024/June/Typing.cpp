#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   string S, T;
   cin >> S >> T;

   int len = T.length(), j = 0;
   for (int i=0; i<len; i++) {
      if (T[i] != S[j]) continue;

      cout << i + 1 << " ";
      j++;
   }
   cout << endl;

   return 0;
}