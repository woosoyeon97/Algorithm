//
//  11055.cpp
//  
//
//  Created by 우소연 on 2018. 1. 26..
//
//

#include <stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    int d[1002]={0};
    int du[1002]={0};
    for(int i=0;i<n;i++){
        int k=0;
        cin>>k;
        d[i]=k;
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<i;j++){
            if(d[i]>d[j] && du[i]<du[j]+d[i]){
                du[i]=du[j]+d[i];
                cnt+=1;
            }
            
        }
        if(cnt==0){
            du[i]=d[i];
        }
    }
    int result=0;
    for(int i=0;i<n;i++){
        result=max(result,du[i]);
    }
    cout<<result<<'\n';
    return 0;
}
