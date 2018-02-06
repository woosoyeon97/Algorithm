//
//  11576.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    int sum=0;
    cin>>a>>b;
    int m;
    cin>>m;
    int k[27]={0,};
    for(int i=0;i<m;i++){
        int n;
        cin>>n;
        sum+=n*pow(a,m-i-1);
    }
    int q,r;
    k[0]=sum%b;
    q=sum/b;
    int c=1;
    while(q!=0){
        r=q%b;
        q=q/b;
        k[c]=r;
        c++;
    }
    for(int j=c-1;j>=0;j--){
        cout<<k[j]<<" ";
    }
    return 0;
}
