#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N, M, K;
   cin >> N >> M >> K;

   vector<int> C(M);
   vector<vector<int>> keys(M);
   vector<char> R(M);
   for (int i=0; i<M; i++) {
      cin >> C[i];

      keys[i].resize(C[i]);
      for (int j=0; j<C[i]; j++) {
         cin >> keys[i][j];
         keys[i][j]--;
      }
      cin >> R[i];
   }

   int ans = 0;
   // assume that '0' would be dummy-key, and '1' would be real-key in binary notation
   for (int mask=0; mask<(1<<N); mask++) { // test all assumed real-key combinations from 0 to 2^N - 1
      bool isCombinationTrue = true;
      for (int i=0; i<M; i++) {
         int cntUsedKey = 0;
         // count the number of keys used that are assumed to be the real-key in each test
         for (int key: keys[i]) {
            cntUsedKey += (mask >> key) & 1;
         }
         // check if the combination matches the expected test result
         isCombinationTrue &= (cntUsedKey >= K) == (R[i] == 'o');
      }

      ans += isCombinationTrue;
   }
   cout << ans << endl;

   return 0;
}