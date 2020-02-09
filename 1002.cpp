//
//  1002.cpp
//  
//
//  Created by 우소연 on 19/01/2020.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int x1, x2, Y1, y2, r1, r2;

int calc(){
    int result;
    double d = pow(x1-x2,2) + pow(Y1-y2,2);
    
    if(d == pow(r1+r2,2)){
        result = 1;
    }else if(d == pow(r1-r2,2) && d != 0){
        result = 1;
    }else if(d < pow(r1+r2,2) && d > pow(r1-r2,2)){
        result = 2;
    }else if(d > pow(r1+r2,2)){
        result = 0;
    }else if(d < pow(r1-r2,2)){
        result = 0;
    }else if(d == 0){
        result = -1;
    }
    return result;
}


int main(){
    int cnt;
    cin>>cnt;
    while(cnt > 0){
        cin >> x1 >> Y1 >> r1 >> x2 >> y2 >> r2;
        cout << calc() << endl;
        cnt -= 1;
    }
   
    return 0;
    
}
