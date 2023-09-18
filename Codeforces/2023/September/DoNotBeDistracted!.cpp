#include <iostream>
#include <vector>

using namespace std;

void solve() {
   int n;
   string s;
   cin >> n >> s;

   vector<int> alphabet(26);
   alphabet[s[0] - 'A']++;
   for (int i=1; i<n; i++) {
      if (s[i] == s[i-1]) continue;
      if (alphabet[s[i] - 'A'] == 0) {
         alphabet[s[i] - 'A']++;
      } else {
         cout << "NO\n";
         return;
      }
   }

   cout << "YES\n";
   
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }
   
   return 0;
}