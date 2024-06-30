#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n;
   cin >> n;

   vector<int> a(n);
   for (int &ai: a) cin >> ai;
   sort(a.begin(), a.end());

   cout << min(a[n - 2] - a[0], a[n - 1] - a[1]) << endl;

   return 0;
}