#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
      string s;
      cin >> s;

      int N = 0;
      for (char c: s) {
         if (c == 'N') N++;
      }

      cout << (N == 1 ? "NO" : "YES") << endl;
   }

   return 0;
}