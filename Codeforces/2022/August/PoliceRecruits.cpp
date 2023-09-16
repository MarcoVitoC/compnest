#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
//	int events[n];
//	for (int i=0; i<n; i++){
//		cin >> events[i];
//	}
//	
//	int count = 0, hired = 0;
//	if (events[0] < 0){
//		count++;
//	}else {
//		hired += events[0];
//	}
//	for (int i=1; i<n; i++){
//		if (events[i] < 0){
//			if (hired + events[i] < 0){
//				count++;
//			}else {
//				hired += events[i];
//			}
//		}else {
//			hired += events[i];
//		}
//	}
//	
//	cout << count << endl;
	
	// FASTER SOLUTION
	int event, police = 0, crime = 0;
	for (int i=0; i<n; i++){
		cin >> event;
		if (event == -1){
			if (police > 0){
				police--;
			}else {
				crime++;
			}
		}else {
			police += event;
		}
	}
	
	cout << crime << endl;
	return 0;
}
