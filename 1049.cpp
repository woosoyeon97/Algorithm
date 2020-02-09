//
//  1049.cpp
//  
//
//  Created by 우소연 on 06/02/2020.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, m, q, r, a, b, result;
    int minpack = 1000000;
    int minnat = 1000000;
    int brandpack[52] = {0};
    int brandnat[52] = {0};
    result = 1000000;
    cin>>n>>m;
    for(int i = 0; i<m; i++){
        cin>>a>>b;
        if(minpack > a){
            minpack = a;
        }
        if(minnat > b){
            minnat = b;
        }
    }
    q = n/6;
    r = n%6;
    if(minpack < minnat*6){
        if(r != 0){
            if(minpack*(q+1) > minpack*q+r*minnat){
                result = minpack*q + r*minnat;
            }else{
                result = minpack * (q+1);
            }
        }else{
            result = minpack * q;
        }
    }else{
        result = n * minnat;
    }
    cout<< result<<endl;
    return 0;
}
