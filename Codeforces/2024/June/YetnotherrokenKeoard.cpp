#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isLowerCase(char c) {
   return c >= 'a' && c <= 'z';
}

bool isUpperCase(char c) {
   return c >= 'A' && c <= 'Z';
}

void solve() {
   string s;
   cin >> s;

   stack<int> lwr, upr;
   int len = s.length();
   for (int i=0; i<len; i++) {
      if (s[i] == 'b' && !lwr.empty()) {
         s[lwr.top()] = '#';
         lwr.pop();
         continue;
      }

      if (s[i] == 'B' && !upr.empty()) {
         s[upr.top()] = '#';
         upr.pop();
         continue;
      }

      if (isLowerCase(s[i]) && s[i] != 'b') lwr.push(i);
      if (isUpperCase(s[i]) && s[i] != 'B') upr.push(i);
   }

   for (int i=0; i<len; i++) {
      if (s[i] == '#' || s[i] == 'B' || s[i] == 'b') continue;
      cout << s[i];
   }
   cout << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}