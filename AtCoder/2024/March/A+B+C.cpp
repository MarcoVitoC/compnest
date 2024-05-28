#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N, M, L;
map<ll, bool> isExistSum;

void preComputeSum(vector<int>& A, vector<int>& B, vector<int>& C) {
   for (int i=0; i<N; i++) {
      for (int j=0; j<M; j++) {
         for (int k=0; k<L; k++) {
            isExistSum[(A[i] + B[j] + C[k]) * 1LL] = true;
         }
      }
   }
}

int main() {
   cin >> N;
   vector<int> A(N);
   for (int &Ai: A) {
      cin >> Ai;
   }

   cin >> M;
   vector<int> B(M);
   for (int &Bi: B) {
      cin >> Bi;
   }

   cin >> L;
   vector<int> C(L);
   for (int &Ci: C) {
      cin >> Ci;
   }

   int Q;
   cin >> Q;

   preComputeSum(A, B, C);
   while (Q--) {
      int X;
      cin >> X;

      cout << (isExistSum[X] ? "Yes" : "No") << endl;
   }

   return 0;
}