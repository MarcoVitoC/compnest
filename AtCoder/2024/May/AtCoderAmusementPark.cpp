#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N, K, A;
   cin >> N >> K;

   int ans = 1, t = K;
   while (N--) {
      cin >> A;

      if (t < A) {
         t = K - A;
         ans++;
         continue;
      }

      t -= A;
   }
   cout << ans << endl;

   return 0;
}