//
//  2331.cpp
//  
//
//  Created by 우소연 on 2018. 2. 19..
//

#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int check[1000002];
int calc(int a,int p){
    int nn=0;
    while(a>0){
        int sd=a%10;
        nn+=pow(sd,p);
        a=(a-sd)/10;
    }
    return nn;
}
int getcalc(int k,int p,int c){
    if(check[k]>0)
    {
        return check[k]-1;
    }
    check[k]=c;
    int u=calc(k,p);
    return getcalc(u,p,c+1);
}
int main(){
    int a,p;
    cin>>a>>p;
    cout<<getcalc(a,p,1)<<'\n';
    return 0;
}
