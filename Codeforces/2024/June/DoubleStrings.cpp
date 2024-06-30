#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<string> s(n);
   map<string, bool> isExist;
   for (string &str: s) {
      cin >> str;
      isExist[str] = true;
   }

   for (int i=0; i<n; i++) {
      bool isConcatenation = false;
      int len = s[i].length();

      for (int j=0; j<len; j++) {
         string prefix = s[i].substr(0, j + 1), suffix = s[i].substr(j + 1);
         if (isExist[prefix] && isExist[suffix]) {
            isConcatenation = true;
            break;
         }
      }

      cout << isConcatenation;
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