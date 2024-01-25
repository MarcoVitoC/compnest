#include <bits/stdc++.h>
using namespace std;

void createStringPermutations(set<string> &st, string s, int l, int r) {
   if (l == r) {
      st.insert(s);
      return;
   }

   for (int i=l; i<r; i++) {
      swap(s[l], s[i]);
      createStringPermutations(st, s, l + 1, r);
      swap(s[l], s[i]);
   }
}

int main() {
   string s; 
   cin >> s;

   set<string> st;
   createStringPermutations(st, s, 0, s.length());

   cout << st.size() << endl;
   for (string str: st) {
      cout << str << endl;
   }

   return 0;
}