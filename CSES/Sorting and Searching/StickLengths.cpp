#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int n;
   cin >> n;

   vector<int> p(n);
   for (int &pi: p) {
      cin >> pi;
   }
   sort(p.begin(), p.end());

   ll midValue = p[n/2], diff = 0;
   for (int pi: p) {
      diff += abs(midValue - pi);
   }
   cout << diff << endl;

   return 0;
}