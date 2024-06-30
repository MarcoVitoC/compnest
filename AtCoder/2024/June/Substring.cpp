#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   string S;
   cin >> S;

   set<string> ans;
   for (int i=0; i<S.length(); i++) {
      string str = "";
      for (int j=i; j<S.length(); j++) {
         str += S[j];
         ans.insert(str);
      }
   }
   cout << ans.size() << endl;

   return 0;
}