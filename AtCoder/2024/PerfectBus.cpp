#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   int N, A;
   cin >> N;

   ll sum = 0, less = 0;
   for (int i=0; i<N; i++) {
      cin >> A;
      sum += A, less = min(less, sum);
   }

   cout << sum - less << endl; // if sum < 0, ans = 0. Otherwise, ans = last prefix sum - min prefix sum

   return 0;
}