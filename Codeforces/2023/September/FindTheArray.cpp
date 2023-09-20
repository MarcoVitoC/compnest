#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin >> t;

   while (t--) {
      int s;
      cin >> s;

      int minPossibleSize = 0;
      while (pow(minPossibleSize, 2) < s) {
         minPossibleSize++;
      }
      cout << minPossibleSize << endl;
   }

   return 0;
}