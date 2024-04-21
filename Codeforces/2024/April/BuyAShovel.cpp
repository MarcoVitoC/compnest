#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int k, r;
   cin >> k >> r;

   int ans = 1;
   while ((k * ans) % 10 != 0 && ((k * ans) - r) % 10 != 0) ans++;
   cout << ans << endl;

   return 0;
}