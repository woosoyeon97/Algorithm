//
//  2193.cpp
//  
//
//  Created by 우소연 on 2018. 1. 24..
//
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long d[92][2]={0};
    
    d[1][1]=1;
    d[2][0]=1;
    
    for(int i=3;i<=n;i++){
        d[i][0]=d[i-1][0]+d[i-2][0];
        d[i][1]=d[i-1][1]+d[i-2][1];
    }
    long long result=0;
    result=d[n][0]+d[n][1];
    cout<<result<<'\n';
    return 0;
}
