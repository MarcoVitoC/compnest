#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, a;
   cin >> n;

   vector<int> cnt(26, 0);
   while (n--) {
      cin >> a;

      for (int i=0; i<26; i++) {
         if (cnt[i] == a) {
            cout << char(i + 'a');
            cnt[i]++;
            break;
         }
      }
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