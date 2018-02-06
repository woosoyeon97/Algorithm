//
//  9613.cpp
//  
//
//  Created by 우소연 on 2018. 2. 6..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int gcd(int a, int b){
    int r=0;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int n,m;
    int a[100]={0,};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        for(int j=0;j<m;j++){
            int k=0;
            cin>>k;
            a[j]=k;
        }
        long long sum=0;
        for(int u=0;u<m;u++){
            for(int p=u+1;p<m;p++){
                sum+=gcd(a[u],a[p]);
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}

