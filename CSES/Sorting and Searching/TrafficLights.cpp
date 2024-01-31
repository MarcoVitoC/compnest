#include <bits/stdc++.h>
using namespace std;

int main() {
   int x, n;
   cin >> x >> n;

   vector<int> p(n);
   for (int &pi: p) {
      cin >> pi;
   }

   set<int> s;
   s.insert(0);
   s.insert(x);

   multiset<int> ms;
   for (int pi: p) {
      s.insert(pi);

      int prevDist = pi - *prev(s.find(pi)), nextDist = *next(s.find(pi)) - pi;
      ms.insert(prevDist);
      ms.insert(nextDist);

      int maxDist = max(prevDist, nextDist), minDist = min(prevDist, nextDist);
      if (ms.count(maxDist + minDist)) ms.erase(ms.find(maxDist + minDist));
      cout << *prev(ms.end()) << " ";
   }

   return 0;
}