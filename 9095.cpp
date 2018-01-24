//
//  9095.cpp
//  
//
//  Created by 우소연 on 2018. 1. 21..
//
//

#include <iostream>
#include<string>
using namespace std;
int go(int k){
    int d[k];
    d[0]=1;
    d[1]=1;
    d[2]=2;
    for(int i=3;i<=k;i++){
        d[i]=d[i-1]+d[i-2]+d[i-3];
    }
    return d[k];
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        cin>>k;
        cout<<go(k)<<'\n';
    }
    return 0;
}
