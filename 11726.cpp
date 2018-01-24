//
//  11726.cpp
//  
//
//  Created by 우소연 on 2018. 1. 21..
//
//
//2*m 타일링
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>> n;
    int d[n];
    d[0]=1;
    d[1]=1;
    for(int i=2;i<=n;i++){
        d[i]=(d[i-1]+d[i-2])%10007;
    }
    cout<<d[n]<<'\n';
    return 0;
}

