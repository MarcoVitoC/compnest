#include <bits/stdc++.h>

using namespace std;

void solve() {
   int n;
   cin >> n;
   
   int a[n], maxValueIndex = 0;
   for (int i=0; i<n; i++) {
      cin >> a[i];
      maxValueIndex = (a[maxValueIndex] >= a[i]) ? maxValueIndex : i;
   }
   
   long long sum = 0;
   for (int i=0; i<n; i++) {
      if (i == maxValueIndex) continue;
      sum += a[i];
   }

   printf("%.8f\n", (double)sum / (n - 1) + a[maxValueIndex]);
}

int main() {
   int t;
   cin >> t;

   while (t--) {
      solve();
   }

   return 0;
}