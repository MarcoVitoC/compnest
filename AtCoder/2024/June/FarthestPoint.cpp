#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N;
   cin >> N;

   vector<pair<int, int>> vp(N);
   for (auto &vi: vp) {
      cin >> vi.first >> vi.second;
   }

   for (int i=0; i<N; i++) {
      int maxDist = 0, minIDIdx = 0;
      for (int j=0; j<N; j++) {
         int x = (vp[i].first - vp[j].first) * (vp[i].first - vp[j].first);
         int y = (vp[i].second - vp[j].second) * (vp[i].second - vp[j].second);
         int dist = x + y;

         if (dist > maxDist) {
            maxDist = dist;
            minIDIdx = j + 1;
         }
      }
      cout << minIDIdx << endl;
   }

   return 0;
}