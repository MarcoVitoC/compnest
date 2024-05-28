#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int Q;
   cin >> Q;

   vector<int> v(Q);
   while (Q--) {
      int qt, x;
      cin >> qt >> x;

      if (qt == 1) v.push_back(x);
      if (qt == 2) cout << v[v.size() - x] << endl;
   }

   return 0;
}