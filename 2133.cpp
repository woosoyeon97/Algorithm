//
//  2133.cpp
//  
//
//  Created by 우소연 on 2018. 3. 23..
//

#include <stdio.h>
#include<iostream>
using namespace std;
long long d[31];
int main(){
    int n;
    cin>>n;
    d[0]=1;
    for(int i=2;i<=n;i+=2){
        d[i]=d[i-2]*3;
        for(int j=i-4;j>=0;j-=2){
            d[i]=d[i]+2*d[j];
        }
    }
    cout<<d[n];
    return 0;
}
