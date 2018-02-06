//
//  2089.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int result(int n){
    if(n==0){
        return 0;
    }
    if(n%2==0){
        result(-(n/2));
        cout<<"0";
    }else{
        if(n>0){
            result(-(n/2));
        }else{
            result((-n+1)/2);
        }
        cout<<"1";
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"0";
    }else{
        result(n);
    }
    return 0;
}
