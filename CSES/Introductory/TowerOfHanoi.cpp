#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int left, int mid, int right) {
   if (n == 0) return;

   towerOfHanoi(n - 1, left, right, mid); // move n - 1 disks to the center of the stack
   cout << left << " " << right << endl;

   towerOfHanoi(n - 1, mid, left, right); // move the remaining disks from the center to the third stack
}

int main() {
   int n;
   cin >> n;

   cout << pow(2, n) - 1 << endl;
   towerOfHanoi(n, 1, 2, 3);
   
   return 0;
}