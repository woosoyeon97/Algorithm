//
//  1439.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    string str;
    int firstcnt = 0;
    int zerocnt = 0;
    cin>>str;
    int cnt1 = 0;
    int cnt0 = 0;
    int answer0 = 0;
    int answer1 = 0;
    for(long long j = 0; j< str.size(); j++){
        if(str[j] == '1'){
            cnt1++;
        }else{
            if(cnt1 != 0){
                answer1++;
                cnt1 = 0;
            }
        }
        if(str[j] == '0'){
            cnt0++;
        }else{
            if(cnt0 != 0){
                answer0++;
                cnt0 = 0;
            }
        }
    }
    if(cnt1 != 0){
        answer1++;
    }
    if(cnt0 != 0){
        answer0++;
    }
    if(answer1 < answer0){
        cout<< answer1<< endl;
    }else{
        cout<< answer0 <<endl;
    }
    return 0;
}
