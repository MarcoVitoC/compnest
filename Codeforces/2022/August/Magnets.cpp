#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int firstMagnet, restMagnet, count = 1;
	cin >> firstMagnet;
	
	for (int i=1; i<n; i++){
		cin >> restMagnet;
		if (restMagnet != firstMagnet){
			count++;
			firstMagnet = restMagnet;
		}
	}

	cout << count << endl;
	return 0;
}
