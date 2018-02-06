//
//  2004.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int count(long long n){
    int cnt=0;
    long long r;
    for(long long i=5;i<=n;i++){
        if(i%5==0){
            long long k=i;
            r=i%5;
            while(r==0){
                k=k/5;
                cnt++;
                r=k%5;
            }
        }
    }
    return cnt;
}
int main(){
    long long n,m;
    cin>>n>>m;
    long long result=count(n)-count(m)-count(n-m);
    cout<<result<<'\n';
    return 0;
}
