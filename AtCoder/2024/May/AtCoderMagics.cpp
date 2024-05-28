#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N, C;
   cin >> N;

   vector<int> A(N);
   map<int, int> idx;
   vector<pair<int, int>> vp;
   for (int i=0; i<N; i++) {
      cin >> A[i] >> C;
      vp.push_back({C, A[i]});
      idx[A[i]] = i + 1;
   }
   sort(vp.begin(), vp.end());

   int maxStrength = 0, m = 0;
   for (int i=0; i<N; i++) {
      int currCost = vp[i].first, currStrength = vp[i].second;

      if (currStrength < maxStrength) {
         idx[currStrength] = -1;
         continue;
      }

      maxStrength = currStrength;
      m++;
   }

   cout << m << endl;
   for (int i=0; i<N; i++) {
      if (idx[A[i]] != -1) {
         cout << idx[A[i]] << " ";
      }
   }
   cout << endl;

   return 0;
}