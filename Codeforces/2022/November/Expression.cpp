#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	int x = max(max(a+b, a*b)*c, max(a+b, a*b)+c);
	int y = max(max(b+c, b*c)*a, max(b+c, b*c)+a);
	cout << max(x, y) << endl;
	
	return 0;
}
