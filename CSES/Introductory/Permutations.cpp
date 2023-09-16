#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	
	if (n == 2 || n == 3){
		cout << "NO SOLUTION" << endl; 
	}else {
		for (int i=2; i<=n; i+=2){ // print even numbers
			cout << i << " ";
		}
		for (int i=1; i<=n; i+=2){ // print odd numbers
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
