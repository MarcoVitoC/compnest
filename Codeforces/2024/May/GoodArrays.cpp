#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n;
   cin >> n;

   vector<int> a(n);
   ll cntOne = 0, sum = 0;
   for (int &ai: a) {
      cin >> ai;
      
      if (ai == 1) cntOne++;
      sum += ai;
   }

   if (n == 1) {
      cout << "NO" << endl;
      return;
   }

   cout << (((cntOne * 2) + (n - cntOne) <= sum) ? "YES" : "NO") << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}