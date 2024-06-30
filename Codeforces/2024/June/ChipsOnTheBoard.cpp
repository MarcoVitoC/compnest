#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
   int n, mnA = 1e9, mnB = 1e9;
   cin >> n;

   vector<int> a(n), b(n);
   for (int &ai: a) {
      cin >> ai;
      mnA = min(mnA, ai);
   }
   for (int &bi: b) {
      cin >> bi;
      mnB = min(mnB, bi);
   }

   ll sumA = 0, sumB = 0;
   for (int ai: a) sumA += (ai + mnB);
   for (int bi: b) sumB += (bi + mnA);

   cout << min(sumA, sumB) << endl;
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