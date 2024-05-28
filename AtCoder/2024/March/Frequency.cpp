#include <bits/stdc++.h>
using namespace std;

int main() {
   string S;
   cin >> S;

   map<char, int> mp;
   for (char c: S) mp[c]++;

   char ans = 'a';
   for (char c='b'; c<='z'; c++) {
      if (mp[c] > mp[ans]) ans = c;
   }
   cout << ans << endl;

   return 0;
}