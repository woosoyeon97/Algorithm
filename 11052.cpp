//
//  11052.cpp
//  
//
//  Created by 우소연 on 2018. 1. 21..
//
//

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int P[n];
    int d[n];
    for(int i=1;i<=n;i++){
        int k=0;
        cin>>k;
        P[i]=k;
        d[i]=0;
    }
    int j=n;
    d[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            d[i]=max(d[i],P[j]+d[i-j]);
        }
    } 
    cout<<d[n]<<'\n';
    return 0;
}
