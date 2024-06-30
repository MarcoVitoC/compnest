#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);

   int N;
   cin >> N;

   int i = 0;
   // find the position of the first '1' in the binary notation of N from the right (least significant bit)
   while ((N & (1 << i)) == 0) {
      i++;
   }
   cout << i << endl;

   return 0;
}