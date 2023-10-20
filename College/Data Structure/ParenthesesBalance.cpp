#include <bits/stdc++.h>
using namespace std;

bool isMatchParentheses(char a, char b) {
   return ((a == '(' && b == ')') || (a == '[' && b == ']'));
}

bool isValidParentheses(string s) {
   stack<char> st;
   for (int i=0; i<s.length(); i++) {
      if (s[i] == '(' || s[i] == '[') {
         st.push(s[i]);
      } else if (!st.empty() && isMatchParentheses(st.top(), s[i])) {
         st.pop();
      } else {
         return false;
      }
   }
   
   return st.empty();
}

int main() {
   int n;
   scanf ("%d", &n); getchar();

   while (n--) {
      string s;
      getline(cin, s);
      
      cout << (isValidParentheses(s) ? "Yes" : "No") << endl;
      if (isValidParentheses(s)) {
         cout << "Yes\n";
      } else {
         cout << "No\n";
      }
   }

   return 0;
}