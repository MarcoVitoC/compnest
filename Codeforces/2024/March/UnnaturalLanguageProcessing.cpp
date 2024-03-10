#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   string s;
   cin >> n >> s;

   string res = "";
   while (!s.empty()) {
      int len = (s.back() == 'a' || s.back() == 'e') ? 2 : 3;

      while (len--) {
         res += s.back();
         s.pop_back();
      }
      res += '.';
   }

   res.pop_back();
   reverse(res.begin(), res.end());
   cout << res << endl;
}

int main() {
   int t;
   cin >> t;
   
   while (t--) {
      solve();
   }

   return 0;
}