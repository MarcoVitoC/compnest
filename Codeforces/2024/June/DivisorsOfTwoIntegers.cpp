#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int n, d;
   cin >> n;

   multiset<int> m;
   for (int i=0; i<n; i++) {
      cin >> d;
      m.insert(d);
   }

   int x = *prev(m.end()); // find the biggest element
   for (int i=1; i<=x; i++) { // remove all divisors of x
      if (x % i == 0) m.erase(m.find(i));
   }
   cout << x << " " << *prev(m.end()) << endl;

   return 0;
}