#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   while (cin >> s) {
      string str = "";
      stack<string> st;
      for (int i=0; i<s.length(); i++) {
         if (s[i] == '[') {
            int j = i + 1;
            string temp = "";
            while (s[j] != '[' && s[j] != ']') {
               temp += s[j];
               j++;
            }
            i = j - 1;
            st.push(temp);
         } else if (s[i] == ']') {
            continue;
         } else {
            str += s[i];
         }
      }

      string ans = "";
      while (!st.empty()) {
         ans += st.top();
         st.pop();
      }
      ans += str;

      cout << ans << endl;
   }

   return 0;
}