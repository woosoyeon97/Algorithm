//
//  1934.cpp
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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        int k=gcd(a,b);
        cout<<(a*b)/k<<'\n';
    }
    return 0;
}
