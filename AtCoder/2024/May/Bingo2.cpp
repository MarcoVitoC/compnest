#include <bits/stdc++.h>
using namespace std;

int findRowIndex(int i, int N) {
   return (i - 1) / N;
}

int findColumnIndex(int i, int N) {
   return (i % N == 0) ? N - 1 : (i % N) - 1;
}

bool isLeftDiagonal(int N, int colIdx, int rowIdx) {
   return N - colIdx - 1 == rowIdx;
}

bool isRightDiagonal(int colIdx, int rowIdx) {
   return colIdx == rowIdx;
}

void solve() {
   int N, T, A;
   cin >> N >> T;

   vector<int> R(N), C(N);
   int leftDiagonalSum = 0, rightDiagonalSum = 0;
   for (int i=1; i<=N*N; i++) {
      int r = findRowIndex(i, N), c = findColumnIndex(i, N);
      R[r] += i;
      C[c] += i;

      if (isLeftDiagonal(N, c, r)) leftDiagonalSum += i;
      if (isRightDiagonal(c, r)) rightDiagonalSum += i;
   }

   for (int i=1; i<=T; i++) {
      cin >> A;

      int r = findRowIndex(A, N), c = findColumnIndex(A, N);
      R[r] -= A;
      C[c] -= A;

      if (isLeftDiagonal(N, c, r)) leftDiagonalSum -= A;
      if (isRightDiagonal(c, r)) rightDiagonalSum -= A;

      if (R[r] == 0 || C[c] == 0 || leftDiagonalSum == 0 || rightDiagonalSum == 0) { // if bingo
         cout << i << endl;
         return;
      }
   }
   cout << -1 << endl;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   solve();

   return 0;
}