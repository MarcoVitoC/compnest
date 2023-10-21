#include <bits/stdc++.h>
using namespace std;

bool isAlphabet(char c) {
   return (c >= 'a' && c <= 'z');
}

bool isOperator(char c) {
   return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int main() {
   int n;
   cin >> n;

   while (n--) {
      string s;
      cin >> s;

      stack<char> operators;
      string ans = "";
      for (char c: s) {
         if (isAlphabet(c)) {
            ans += c;
         } else if (isOperator(c)) {
            operators.push(c);
         } else if (c == ')') {
            ans += operators.top();
            operators.pop();
         }
      }

      while (!operators.empty()) {
         ans += operators.top();
         operators.pop();
      }

      cout << ans << endl;
   }

   return 0;
}