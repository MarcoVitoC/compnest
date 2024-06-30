#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N, A;
   cin >> N;

   stack<int> st;
   for (int i=0; i<N; i++) {
      cin >> A;
      
      st.push(A);
      while (st.size() > 1) {
         int rightMost = st.top(); st.pop();
         if (rightMost != st.top()) {
            st.push(rightMost);
            break;
         }

         st.pop();
         st.push(rightMost + 1);
      }
   }
   cout << st.size() << endl;

   return 0;
}