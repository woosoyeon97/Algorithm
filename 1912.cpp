//
//  1912.cpp
//  
//
//  Created by 우소연 on 2018. 3. 23..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d[100002];
    int a[100002];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    d[0]=a[0];
    for(int i=1;i<n;i++){
        d[i]=a[i];
        int k;
        k=d[i-1]+a[i];
        if(k>a[i]){
            d[i]=k;
        }
    }
    int r=d[0];
    for(int i=0;i<n;i++){
        if(r<d[i]){
            r=d[i];
        }
    }
    cout<<r<<"\n";
    return 0;
}
