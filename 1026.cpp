//
//  1026.cpp
//  
//
//  Created by 우소연 on 23/01/2020.
//

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k, a, b, result;
    int A[52] = {0};
    int B[52] = {0};
    cin>>k;
    for(int i = 0; i< k; i++){
        cin>>a;
        A[i] = a;
    }
    for(int j = 0; j< k; j++){
        cin>>b;
        B[j] = b;
    }
    sort(A, A + k);
    sort(B, B + k);
    result = 0;
    int j = k - 1;
    for(int i = 0;i<k;i++){
        j = k - 1 - i;
        result += (A[i] * B[j]);
    }
    cout << result << endl;
    return 0;
}
