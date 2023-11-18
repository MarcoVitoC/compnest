#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   string s;
   cin >> s;

   string alphabets = "abcdefghijklmnopqrstuvwxyz";
   int ans = 1e5;
   for (char c: alphabets) {
      int l = 0, r = n - 1, initialAns = 0;
      while (l <= r) {
         if (s[l] != s[r]) {
            if (s[l] != c && s[r] != c) {
               initialAns = 1e5;
               break;
            } else if (s[l] == c) {
               l++;
            } else {
               r--;
            }
            initialAns++;
         } else {
            l++, r--;
         }
      }
      ans = min(ans, initialAns);
   }

   cout << (ans == 1e5 ? -1 : ans) << endl;
}

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}