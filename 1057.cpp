//
//  1057.cpp
//  
//
//  Created by 우소연 on 09/02/2020.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n, k, h, round, cnt;
    cnt = 1;
    cin>>n>>k>>h;
    while(n != 1){
        if(n%2 == 1){
            n = n/2 + 1;
            round++;
        }else{
            n = n/2;
            round++;
        }
    }
    while(round > 0){
        if(k%2 == 1){
            k = k/2 + 1;
        }else{
            k = k/2;
        }
        if(h%2 == 1){
            h = h/2 + 1;
        }else{
            h = h/2;
        }
        if(k == h){
            cout<<cnt<<endl;
            return 0;
        }
        cnt++;
        round--;
    }
    if(cnt == 1){
        cnt = -1;
        cout<<cnt<<endl;
    }
    return 0;
}
