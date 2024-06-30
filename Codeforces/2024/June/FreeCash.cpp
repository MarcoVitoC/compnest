#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   vector<int> h(n), m(n);
   for (int i=0; i<n; i++) {
      cin >> h[i] >> m[i];
   }

   int ans = 1, cnt = 1;
   for (int i=1; i<n; i++) {
      if (h[i] == h[i - 1] && m[i] == m[i - 1]) {
         cnt++;
         continue;
      }

      ans = max(ans, cnt);
      cnt = 1;
   }
   cout << max(ans, cnt) << endl;

   return 0;
}