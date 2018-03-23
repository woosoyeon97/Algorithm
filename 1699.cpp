//
//  1699.cpp
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
    for(int i=1;i<=n;i++){
        d[i]=i;
        for(int j=1;j*j<=i;j++){
            if(d[i]>d[i-j*j]+1){
                d[i]=d[i-j*j]+1;
            }
        }
    }
    cout<<d[n];
    return 0;
}
