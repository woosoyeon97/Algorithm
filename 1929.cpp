//
//  1929.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
using namespace std;
const int BIG = 1000000;
bool c[BIG+1];
int main(){
    int p[1000002];
    int pn=0;
    int a,b;
    cin>>a>>b;
    c[0]=c[1]=true;
    for(int i=2;i*i<=BIG;i++){
        if(c[i]==false){
            for(int j=i*i;j<=BIG;j+=i){
                c[j]=true;
            }
        }
    }
    for(int i=a;i<=b;i++){
        if(c[i]==false){
            cout<<i<<'\n';
        }
    }
    return 0;
}
