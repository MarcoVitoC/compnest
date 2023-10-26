#include <bits/stdc++.h>
using namespace std;

int main() {
   while (1) {
      int n;
      cin >> n;

      if (n == 0) break;

      // Find the desired number from 1 to n in order. If the inputted value doesn't match, push it to the stack
      int a, desiredNum = 1;
      stack<int> st;
      for (int i=0; i<n; i++) {
         cin >> a;

         if (a == desiredNum) {
            desiredNum++;
         } else {
            st.push(a);
         }

         while (!st.empty() && st.top() == desiredNum) {
            desiredNum++;
            st.pop();
         }
      }

      cout << ((st.empty()) ? "yes" : "no") << endl;
   }

   return 0;
}