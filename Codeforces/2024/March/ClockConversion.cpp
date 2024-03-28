#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s;
   cin >> s;

   int hours = stoi(s.substr(0, 2));
   bool isAM = hours < 12;

   if (hours == 0) {
      hours = 12;
   } else if (hours > 12) {
      hours -= 12;
   }

   cout << (hours < 10 ? "0" : "") << hours << s.substr(2) << (isAM ? " AM" : " PM") << endl;
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