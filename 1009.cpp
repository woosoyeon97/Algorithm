//
//  1009.cpp
//  
//
//  Created by 우소연 on 20/01/2020.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long T, a, b, result;
    cin>>T;
    while(T>0){
        cin>>a>>b;
        b = b%4;
        if(b == 0){
            b = 4;
        }
        result = pow(a, b);
        result = result % 10;
        if(result == 0){
            result = 10;
        }
        cout<<result<< endl;
        T -= 1;
    }
    return 0;
}
