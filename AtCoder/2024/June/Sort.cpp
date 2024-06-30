#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N;
   cin >> N;

   vector<int> A(N);
   map<int, int> idx;
   for (int i=0; i<N; i++) {
      cin >> A[i];
      idx[A[i]] = i;
   }

   int k = 0;
   vector<pair<int, int>> vp;
   for (int i=0; i<N; i++) {
      if (i == idx[i + 1]) continue;

      k++;
      vp.push_back({i + 1, idx[i + 1] + 1});
      idx[A[i]] = idx[i + 1];
      swap(A[i], A[idx[i + 1]]);
   }

   cout << k << endl;
   for (auto p: vp) {
      cout << p.first << " " << p.second << endl;
   }

   return 0;
}