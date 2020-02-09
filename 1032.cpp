//
//  1032.cpp
//  
//
//  Created by 우소연 on 23/01/2020.
//

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int k, cnt, max;
    int a[52] = {0};
    string cmp;
    string str;
    
    cin>>k;
    cnt = k;
    max = k - 1;
    while(cnt > 0){
        cin >> str;
        if(cnt == k){
            cmp = str;
        }else{
            for(int i = 0;i<str.length(); i++){
                if(cmp.at(i) == str.at(i)){
                    a[i] += 1;
                }
            }
        }
        cnt--;
    }
    for(int j = 0; j<cmp.length(); j++){
        if(a[j] == max){
            cout<<cmp.at(j);
        }else{
            cout<<"?";
        }
    }
    return 0;
}

