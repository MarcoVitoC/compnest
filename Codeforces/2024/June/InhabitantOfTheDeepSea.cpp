#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll n, k;
   cin >> n >> k;

   deque<int> dq(n);
   for (int &a: dq) {
      cin >> a;
   }

   while (dq.size() > 1 && k > 0) {
      int minDurability = min(dq.front(), dq.back());

      if (2 * minDurability <= k) {
         dq.front() -= minDurability;
         dq.back() -= minDurability;
         k -= (2 * minDurability);
      } else {
         dq.front() -= (k / 2) + (k % 2 != 0);
         dq.back() -= (k / 2);
         k = 0;
      }

      if (dq.front() == 0) dq.pop_front();
      if (dq.back() == 0) dq.pop_back();  
   }

   cout << n - dq.size() + (!dq.empty() && dq.front() <= k) << endl;
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