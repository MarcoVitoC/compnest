#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N;
   cin >> N;

   vector<int> A(N);
   for (int &Ai: A) {
      cin >> Ai;
   }
   sort(A.begin(), A.end());

   int j = N;
   ll pairs = 0;
   for (int i=0; i<N; i++) { // count number of pairs such that x + y >= 10^8
      j = max(j, i + 1);

      while (j - 1 > i && A[j - 1] + A[i] >= 100000000) j--;
      pairs += N - j;
   }

   ll sumOfAllPairs = 0;
   for (int i=0; i<N; i++) {
      sumOfAllPairs += 1LL * A[i] * (N - 1);
   }

   cout << sumOfAllPairs - 100000000 * pairs << endl;

   return 0;
}