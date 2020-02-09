//
//  1037.cpp
//  
//
//  Created by 우소연 on 06/02/2020.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n = 0;
    int a[1000002] ={0};
    int answer = 0;
    cin>>n;
    for(int i = 0; i< n;i++){
        int t;
        cin>>t;
        a[i] = t;
    }
    sort(a,a + n);
    answer = a[0]*a[n-1];
    cout<<answer<<endl;
    return 0;
}
