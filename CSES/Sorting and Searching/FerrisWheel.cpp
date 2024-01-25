#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, x;
   cin >> n >> x;

   vector<int> p(n);
   for (int &pi: p) {
      cin >> pi;
   }
   sort(p.begin(), p.end());

   int l = 0, r = p.size() - 1, gondola = 0;
   while (l <= r) {
      if ((l == r && p[l] <= x) || p[l] + p[r] <= x) l++;
      gondola++, r--;
   }
   cout << gondola << endl;

   return 0;
}