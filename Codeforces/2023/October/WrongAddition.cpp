#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   ll a, s;
   cin >> a >> s;

   stack<int> st;
   while (a != 0 || s != 0) {
      if (a % 10 > s % 10) {
         int temp = s % 10;
         s /= 10;
         temp += (s % 10) * 10;
         st.push(temp - (a % 10));
      } else {
         st.push((s % 10) - (a % 10));
      }

      a /= 10;
      s /= 10;
   }

   ll res = 0;
   while (!st.empty()) {
      if (st.top() % 100 > 9 || st.top() < 0) {
         cout << -1 << endl;
         return;
      }
      res = res * 10 + st.top();
      st.pop();
   }
   
   cout << res << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}