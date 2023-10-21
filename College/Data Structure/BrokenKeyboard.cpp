#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   stack<string> st;
   while (cin >> s) {
      for (int i=0; i<s.length(); i++) {
         if (s[i] == '[') {
            int j = i + 1;
            string temp = "";
            while (s[j] != ']') {
               temp += s[j];
               j++;
            }
            i = j;
            st.push(temp);
         }
      }

      string str = "";
      while (!st.empty()) {
         str += st.top();
         st.pop();
      }
      str += s;

      string ans = "";
      for (int i=0; i<str.length(); i++) {
         while (str[i] == '[' || str[i] == ']') {
            int j = i;
            while (str[j] != ']') {
               j++;
            }
            i = j + 1;
         }
         ans += str[i];
      }
      cout << ans << endl;
   }

   return 0;
}