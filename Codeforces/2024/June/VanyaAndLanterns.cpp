#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(), x.end()
using namespace std;

double max(double a, double b) {
   return (a > b) ? a : b;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, l;
   cin >> n >> l;

   vector<int> a(n);
   for (int &ai: a) cin >> ai;
   sort(all(a));

   double ans = max(a[0], l - a[n - 1]);
   for (int i=0; i<n-1; i++) {
      ans = max(ans, abs(a[i] - a[i + 1]) * 1.0 / 2);
   }
   printf("%.10f\n", ans);

   return 0;
}