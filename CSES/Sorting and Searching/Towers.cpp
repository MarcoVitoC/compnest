#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, k;
   cin >> n;

   multiset<int> ms;
   for (int i=0; i<n; i++) {
      cin >> k;

      int upperBound = *ms.upper_bound(k);
      if (upperBound > k && ms.count(upperBound)) ms.erase(ms.find(upperBound));
      ms.insert(k);
   }
   cout << ms.size() << endl;

   return 0;
}