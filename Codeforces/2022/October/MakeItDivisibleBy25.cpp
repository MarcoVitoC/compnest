#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while (t--){ 
		string n; // n is divisible by 25 if it ends with 00, 25, 50, 75
		cin >> n;
		
		int len = n.size();
		int res = len;
		for (int i=0; i<len; i++){
			for (int j=i+1; j<len; j++){
				int num = (n[i] - '0')*10 + (n[j] - '0'); 
				if (num % 25 == 0){ // if num == 00 or 25 or 50 or 75, then count the difference between i and j to see how many numbers need to be deleted
					res = min(res, (j-i-1) + (len-1-j)); 
					// *number* i *number* j *number* --> (j-i-1) to find the difference between i and j
					// 								  --> (n-1-j) to find the difference if j isn't located at the end of the string
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
