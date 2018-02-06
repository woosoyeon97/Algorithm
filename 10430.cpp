//
//  10430.cpp
//  
//
//  Created by 우소연 on 2018. 2. 6..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int A,B;
    A=a%c;
    B=b%c;
    cout<<(a+b)%c<<'\n';
    cout<<(A+B)%c<<'\n';
    cout<<(a*b)%c<<'\n';
    cout<<(A*B)%c<<'\n';
    return 0;
}
