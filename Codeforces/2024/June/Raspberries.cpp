#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, k;
   cin >> n >> k;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   int ans = 1e5;
   for (int x: a) {
      if (x <= k) {
         ans = min(ans, k - x);
      } else {
         int cnt = 0, tmp = x;
         while (tmp % k != 0) tmp++, cnt++;
         ans = min(ans, cnt);
      }
   }

   if (k == 4) { // 2 even numbers are needed so that a number is divisible by 4
      int neededEvenNum = 0;
      for (int x: a) {
         if (x % 2 == 0) neededEvenNum++;
      }
      neededEvenNum = max(0, 2 - neededEvenNum);
      ans = min(ans, neededEvenNum);
   }

   cout << ans << endl;
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