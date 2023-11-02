#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll merge(ll a[], int left, int mid, int right) {
   ll temp[right-left+1], i = left, j = mid + 1, idx = 0, inversionCount = 0;
   while (i <= mid && j <= right) {
      if (a[i] <= a[j]) {
         temp[idx++] = a[i++];
      } else {
         temp[idx++] = a[j++];
         inversionCount += (mid - i + 1);
      }
   }

   while (i <= mid) {
      temp[idx++] = a[i++];
   }

   for (int i=0; i<idx; i++) {
      a[i+left] = temp[i]; 
   }

   return inversionCount;
}

ll countInversion(ll a[], int left, int right) {
   ll mid, inversionCount = 0;

   if (left != right) {
      mid = left + (right - left) / 2;
      inversionCount += countInversion(a, left, mid);
      inversionCount += countInversion(a, mid + 1, right);
      inversionCount += merge(a, left, mid, right);
   }

   return inversionCount;
}

int main() {
   int t;
   cin >> t;
   cout << endl;

   while (t--) {
      int n;
      cin >> n;

      ll a[n+5];
      for (int i=0; i<n; i++) {
         cin >> a[i];
      }

      cout << countInversion(a, 0, n-1) << endl;
      cout << endl;
   }

   return 0;
}