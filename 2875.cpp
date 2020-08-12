//
//  2875.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//
//6 4 1 = 3
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int n, m, k;
    int team = 0;
    cin>> n>> m>> k;
    int first = n / 2;
    int second = 0;
    if(first > m){
        team = m;
        second = m;
    }else{
        team = first;
        second = first;
    }
    
    
    int temp = n + m - (second * 3);
    if(temp - k < 0){
        if((-1 * (temp - k)) % 3 == 0){
            team -= (-1 * (temp - k)) / 3;
        }else{
            team -= 1;
            team -= (-1 * (temp - k)) / 3;
        }
    }
    
    cout<< team << endl;
    return 0;
}
