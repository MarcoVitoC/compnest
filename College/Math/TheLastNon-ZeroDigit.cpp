#include <iostream>
#define ll long long
using namespace std;

int main() {
   ll N, M;
   
   while (cin >> N >> M) {
      ll res = 1;
      
      if (N == 0) {
         cout << 1 << endl;
      } else {
         for (int i=N; i>N-M; i--) {
            res *= i;
            while (res % 10 == 0) {
               res /= 10;
            }
            res %= 10000000000;
         }
         cout << res % 10 << endl;
      }
   }

   return 0;
}