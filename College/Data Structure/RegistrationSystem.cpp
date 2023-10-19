#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   unordered_map<string, int> ump;
   while (n--) {
      string s;
      cin >> s;

      if (!ump.count(s)) {
         cout << "OK\n";
      } else {
         cout << s << ump[s] << endl;
      }
      ump[s]++;
   }

   return 0;
}