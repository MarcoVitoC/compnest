#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) cin >> ai;
   sort(all(a));

   int m;
   cin >> m;

   vector<int> b(m);
   for (int &bi: b) cin >> bi;
   sort(all(b));
   
   int i = 0, j = 0, ans = 0;
   while (i < n && j < m) {
      if (abs(a[i] - b[j]) <= 1) {
         ans++, i++, j++;
      } else if (a[i] < b[j]) {
         i++;
      } else {
         j++;
      }
   }
   cout << ans << endl;

   return 0;
}