#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, x;
   cin >> n >> x;

   vector<char> shell(3, 'e');
   shell[x] = 'b';
   for (int i=n%6; i>0; i--) {
      if (i % 2 == 0) swap(shell[1], shell[2]); 
      else swap(shell[0], shell[1]);
   }
   
   if (shell[0] == 'b') cout << 0 << endl;
   if (shell[1] == 'b') cout << 1 << endl;
   if (shell[2] == 'b') cout << 2 << endl;

   return 0;
}