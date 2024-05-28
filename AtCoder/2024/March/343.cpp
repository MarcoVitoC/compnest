#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPalindrome(ll N) {
   ll M = 0, tN = N;
   while (N) {
      int x = N % 10;
      N /= 10;

      M = M * 10 + x;
   }

   return M == tN;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   ll N;
   cin >> N;

   ll ans = 0;
   for (ll i=1; i*i*i<=N; i++) {
      if (isPalindrome(i * i * i)) {
         ans = i * i * i;
      }
   }
   cout << ans << endl;

   return 0;
}