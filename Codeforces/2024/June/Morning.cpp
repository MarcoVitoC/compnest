#include <bits/stdc++.h>
#define ll long long
using namespace std;

int toInt(char c) {
   if (c == '0') return 10;
   return c - '0';
}

void solve() {
   string s;
   cin >> s;

   int d1 = abs(toInt(s[0]) - 1);
   int d2 = abs(toInt(s[1]) - toInt(s[0]));
   int d3 = abs(toInt(s[2]) - toInt(s[1]));
   int d4 = abs(toInt(s[3]) - toInt(s[2]));
   cout << d1 + d2 + d3 + d4 + 4 << endl; 
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