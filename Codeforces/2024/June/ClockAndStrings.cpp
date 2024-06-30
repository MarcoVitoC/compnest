#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a, b, c, d;

bool isCDEngulfingAB() {
   return min(c, d) < min(a, b) && max(c, d) > max(a, b);
}

bool isABEngulfingCD() {
   return min(c, d) > min(a, b) && max(c, d) < max(a, b);
}

bool isCDLessThanAB() {
   return min(c, d) < min(a, b) && max(c, d) < min(a, b);
}

bool isCDGreaterThanAB() {
   return min(c, d) > max(a, b) && max(c, d) > max(a, b);
}

void solve() {
   cin >> a >> b >> c >> d;

   if (isCDEngulfingAB() || isABEngulfingCD() || isCDLessThanAB() || isCDGreaterThanAB()) {
      cout << "NO" << endl;
      return;
   }
   cout << "YES" << endl;
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