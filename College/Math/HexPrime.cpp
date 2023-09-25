#include <iostream>
using namespace std;

bool isPrime[100005] = {false};

// Sieve of Eratosthenes
void preCompute(long long N) {
   for (long long i=3; i<=N; i+=2) {
      isPrime[i] = true;
   }

   for (long long i=3; i*i<=N; i+=2) {
      if (isPrime[i]) {
         for (long long j=i*i; j<=N; j+=i) {
            isPrime[j] = false;
         }
      }
   }
}

int main() {
   preCompute(100000);
   
   int count[100005] = {0}, primeTotal = 0;
   for (int i=5; i<=100000; i++) {
      if (isPrime[i] && isPrime[i+6]) primeTotal++;
      count[i] = primeTotal;
   }

   int T;
   cin >> T;

   while (T--) {
      int N;
      cin >> N;

      cout << count[N] << endl;
   }

   return 0;
}