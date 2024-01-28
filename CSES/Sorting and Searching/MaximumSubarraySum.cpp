#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int n;
   cin >> n;

   vector<int> x(n);
   for (int &xi: x) {
      cin >> xi;
   }

   ll currSum = 0, maxSum = -1e9;
   for (int xi: x) { // Kadane's Algorithm
      currSum += xi;
      maxSum = max(maxSum, currSum);
      if (currSum < 0) currSum = 0;
   }
   cout << maxSum << endl;

   return 0;
}