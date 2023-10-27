#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   while (1) {
      ll n;
      cin >> n;

      if (n == 0) break;

      ll h[n];
      for (ll i=0; i<n; i++) {
         cin >> h[i];
      }

      stack<pair<ll, ll>> st;
      ll maxArea = 0;
      for (ll i=0; i<n; i++) {
         ll initialStartIndex = i;
         while (!st.empty() && h[i] < st.top().second) {
            ll currentArea = st.top().second * (i - st.top().first);
            maxArea = max(maxArea, currentArea);
            initialStartIndex = st.top().first;
            st.pop();
         }
         st.push({initialStartIndex, h[i]});
      }

      while (!st.empty()) {
         ll currentArea = st.top().second * (n - st.top().first);
         maxArea = max(maxArea, currentArea);
         st.pop();
      }

      cout << maxArea << endl;
   }

   return 0;
}