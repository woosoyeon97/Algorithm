//
//  2609.cpp
//  
//
//  Created by 우소연 on 2018. 2. 6..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a,a1,b1,b,r;
    cin>>a>>b;
    a1=a;
    b1=b;
    while(b1!=0){
        r=a1%b1;
        a1=b1;
        b1=r;
    }
    cout<<a1<<'\n';
    cout<<(a*b)/a1;
    return 0;
}
