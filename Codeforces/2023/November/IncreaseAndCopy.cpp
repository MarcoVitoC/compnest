#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll findA(ll left, ll right, ll n, ll a) {
   while (left <= right) {
      ll mid = left + (right - left) / 2;
      if (mid * mid <= n) {
         a = max(a, mid);
         left = mid + 1;
      } else {
         right = mid - 1;
      }
   }

   return a;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int t;
   cin >> t;

   while (t--) {
      ll n;
      cin >> n;

      ll a = findA(1, n, n, 0);
      ll div = (n % a == 0) ? n / a : (n / a) + 1;
      
      cout << (a - 1) + ((div) - 1) << endl;
   }

   return 0;
}