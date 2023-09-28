#include <bits/stdc++.h>
using namespace std;

void solve() {
   long long n, k;
   cin >> n >> k;
   
   if (n == 1 && k == 0) {
      cout << 1 << endl;
      return;
   } else if (n == 1 || k < n / 2) {
      cout << -1 << endl;
      return;
   }

   vector<int> seq;
   long long x = k - ((n - 2) / 2);
   seq.push_back(x);
   seq.push_back(x * 2);

   for (int i=1; i<=n-2; i++) {
      seq.push_back(x*2+i);
   }

   for (int i=0; i<seq.size(); i++) {
      cout << seq[i];
      if (i < seq.size() - 1) {
         cout << " ";
      }
   }
   cout << endl;
}

int main() {
   solve();
   
   return 0;
}