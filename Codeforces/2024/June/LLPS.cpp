#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   string s;
   cin >> s;

   map<char, int> cnt;
   for (char c: s) {
      cnt[c]++;
   }

   char ans = 'a';
   for (int i=25; i>=0; i--) {
      if (cnt[i + 'a'] > 0) {
         ans = i + 'a';
         break;
      }
   }

   for (int i=0; i<cnt[ans]; i++) {
      cout << ans;
   }
   cout << endl;

   return 0;
}