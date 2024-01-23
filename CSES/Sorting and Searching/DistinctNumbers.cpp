#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   vector<int> x(n);
   set<int> s;
   for (int &xi: x) {
      cin >> xi;
      s.insert(xi);
   }

   cout << s.size() << endl;

   return 0;
}