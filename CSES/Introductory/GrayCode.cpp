#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> grayCode;
    grayCode.push_back("");
    for (int i=0; i<n; i++){
        int size = grayCode.size();
        for (int j=size-1; j>=0; j--){ // add the previous list in reverse order
            grayCode.push_back(grayCode[j]);
        }
        size *= 2; // multiplied the size by 2 because we also count the vector size after the previous list in reverse order is inserted
        for (int j=0; j<size; j++) {
            if (j<grayCode.size() / 2){ // append the first half of the vector with '0'
                grayCode[j] = "0" + grayCode[j];
            } else{ // append the second half of the vector with '1'
                grayCode[j] = "1" + grayCode[j];
            }
        }
    }
    
    for (int i=0; i<grayCode.size(); i++){
        cout << grayCode[i] << endl;
    }
}
