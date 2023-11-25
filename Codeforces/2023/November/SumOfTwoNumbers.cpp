#include <bits/stdc++.h>
using namespace std;

int digitSum(int num) {
   int sum = 0;
   while (num > 0) {
      sum += num % 10;
      num /= 10;
   }

   return sum;
}

void solve() {
   int n;
   cin >> n;

   int l = 0, r = n;
   while (l <= r) {
      int mid = l + (r - l) / 2;
      int x = mid, y = n - mid;
      if (abs(digitSum(x) - digitSum(y)) <= 1) {
         cout << x << " " << y << endl;
         return;
      } else if (digitSum(x) > digitSum(y)) {
         r = mid - 1;
      } else {
         l = mid + 1;
      }
   }
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}