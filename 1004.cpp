//
//  1004.cpp
//  
//
//  Created by 우소연 on 20/01/2020.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int X1, Y1, X2, Y2;

int calc(int CX, int CY, int r){
    int r1, r2, result;
    double s = pow(X1-CX, 2) + pow(Y1-CY,2);
    double d = pow(X2-CX, 2) + pow(Y2-CY,2);
    if(s <= pow(r, 2)){
        r1 = 1;
    }else{
        r1 = 0;
    }
    if(d <= pow(r, 2)){
        r2 = 1;
    }else{
        r2 = 0;
    }
    if(r1 != r2){
        result = 1;
    }else{
        result = 0;
    }
    return result;
}

int main(){
    int T, T2, cnt, CX, CY, r;
    cin>>T;
    while(T > 0){
        cnt = 0;
        cin>>X1>>Y1>>X2>>Y2;
        cin>>T2;
        while(T2 > 0){
            cin>>CX>>CY>>r;
            cnt += calc(CX, CY, r);
            T2 -= 1;
        }
        cout<<cnt<<endl;
        T -= 1;
    }
    return 0;
}
