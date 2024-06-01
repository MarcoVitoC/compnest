#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   ll N, A, B;
   cin >> N;

   ll shoulderHeightSum = 0, maxHeadHeight = 0;
   for (int i=0; i<N; i++) {
      cin >> A >> B;

      shoulderHeightSum += A;
      maxHeadHeight = max(maxHeadHeight, B - A);
   }
   cout << shoulderHeightSum + maxHeadHeight << endl;

   return 0;
}