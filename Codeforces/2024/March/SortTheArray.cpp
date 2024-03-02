#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) {
      cin >> ai;
   }

   if (is_sorted(a.begin(), a.end())) {
      cout << "yes" << endl;
      cout << 1 << " " << 1 << endl;
      return;
   }

   int l = 0, r = n - 1;
   while (l < n - 1 && a[l] < a[l + 1]) l++;
   while (r > 0 && a[r] > a[r - 1]) r--;

   reverse(a.begin() + l, a.begin() + r + 1);
   if (!is_sorted(a.begin(), a.end())) {
      cout << "no" << endl;
      return;
   }

   cout << "yes" << endl;
   cout << l + 1 << " " << r + 1 << endl;
}

int main() {
   solve();

   return 0;
}