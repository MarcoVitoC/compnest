#include <bits/stdc++.h>
using namespace std;

int main() {
   int N, Q;
   string S;
   cin >> N >> S >> Q;

   string alphabet = "abcdefghijklmnopqrstuvwxyz";
   while (Q--) {
      char c, d;
      cin >> c >> d;

      for (char &ch: alphabet) {
         if (ch == c) ch = d;
      }
   }

   for (char c: S) {
      cout << alphabet[c - 'a'];
   }

   return 0;
}