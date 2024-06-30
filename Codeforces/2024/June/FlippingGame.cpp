#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   int ans = 0;
   for (int i=0; i<n; i++) {
      for (int j=i; j<n; j++) {
         int cnt = 0;
         for (int k=0; k<n; k++) {
            cnt = (k >= i && k <= j) ? cnt + (a[k] ^ 1) : cnt + a[k];
         }
         ans = max(ans, cnt);
      }
   }
   cout << ans << endl;

   return 0;
}