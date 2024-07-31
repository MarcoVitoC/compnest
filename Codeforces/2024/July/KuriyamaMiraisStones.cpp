#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   vector<int> v(n);
   for (int &vi: v) cin >> vi;
   
   vector<int> u(v);
   sort(all(u));

   vector<ll> psv(n), psu(n);
   psv[0] = v[0];
   psu[0] = u[0];
   for (int i=1; i<n; i++) {
      psv[i] = psv[i - 1] + v[i];
      psu[i] = psu[i - 1] + u[i];
   }

   int m;
   cin >> m;

   int type, l, r;
   while (m--) {
      cin >> type >> l >> r;

      if (type == 1) {
         cout << ((l == 1) ? psv[r - 1] : psv[r - 1] - psv[l - 2]) << endl;
         continue;
      }

      cout << ((l == 1) ? psu[r - 1] : psu[r - 1] - psu[l - 2]) << endl;
   }

   return 0;
}