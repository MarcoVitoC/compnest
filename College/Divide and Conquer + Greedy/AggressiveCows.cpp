#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MAX = 1e5;
int N, C, x[MAX+5];

bool isAllCowsInStalls(int distance) {
   int lastCowIndex = 0, placedCowCount = 1;
   for (int i=1; i<N; i++) {
      if (x[i] - x[lastCowIndex] >= distance) {
         lastCowIndex = i;
         placedCowCount++;
      }
   }

   return placedCowCount >= C;
}

int findLargestMinDistance() {
   int left = 0, right = x[N - 1], ans = 0;
   while (left <= right) {
      int mid = left + (right - left) / 2;
      if (isAllCowsInStalls(mid)) {
         ans = max(ans, mid);
         left = mid + 1;
      } else {
         right = mid - 1;
      }
   }

   return ans;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int t;
   cin >> t;

   while (t--) {
      cin >> N >> C;

      for (int i=0; i<N; i++) {
         cin >> x[i];
      }
      sort(x, x + N);
      
      cout << findLargestMinDistance() << endl;
   }

   return 0;
}