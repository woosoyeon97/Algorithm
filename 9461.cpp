//
//  9461.cpp
//  
//
//  Created by 우소연 on 2018. 3. 23..
//

#include <stdio.h>
#include<iostream>
using namespace std;
long long d[100];
int main(){
    int t;
    cin>>t;
    d[1]=1;
    d[2]=1;
    d[3]=1;
    d[4]=2;
    d[5]=2;
    for(int i=6;i<=100;i++){
        d[i]=d[i-1]+d[i-5];
    }
    while(t--){
        int n;
        cin>>n;
        cout<<d[n]<<"\n";
    }
    return 0;
}
