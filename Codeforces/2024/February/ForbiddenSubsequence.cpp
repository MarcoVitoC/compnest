#include <bits/stdc++.h>
using namespace std;

const int INF = 1e5;

void solve() {
   string S, T;
   cin >> S >> T;

   sort(S.begin(), S.end());
   map<char, int> mp;
   for (int i=0; i<S.length(); i++) {
      mp[S[i]]++;
   }

   if (mp[T[0]] == 0 || mp[T[1]] == 0 || mp[T[2]] == 0 || T != "abc") {
      cout << S << endl;
      return;
   }

   for (char c: S) {
      if (c == 'a' || c == 'c') cout << c;
   }
   for (char c: S) {
      if (c != 'a' && c != 'c') cout << c;
   }
   cout << endl;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}