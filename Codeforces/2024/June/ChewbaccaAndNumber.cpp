#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   string x;
   cin >> x;

   int len = x.length();
   for (int i=0; i<len; i++) {
      int t = x[i] - '0';
      int k = (i == 0 && 9 - t == 0) ? 9 : 9 - t;

      cout << ((t < 5) ? t : k);
   }
   cout << endl;

   return 0;
}