#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   int t;
   cin >> t;

   while (t--) {
      string s;
      cin >> s;

      stack<char> st;
      for (char c: s) {
         st.push(c);
         if (st.size() > 1 && ((c == 'B' && st.top() == 'A') || (c == 'B' && st.top() == 'B'))) {
            st.pop();
            st.pop();
         }
      }

      cout << st.size() << endl;
   }

   return 0;
}