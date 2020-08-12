//
//  10610.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string n;
    cin>> n;
    vector<int> v;
    int zerocnt = -1;
    long long cnt = 0;
    int answer = -1;
    for(int i = 0; i< n.size(); i++){
        int num = (n[i] - '0') * 1;
        cnt += num;
    }
    
    for(int i = 0; i< n.size(); i++){
        v.push_back((n[i] - '0') * 1);
    }
    sort(v.begin(), v.end());
    if(cnt % 3 == 0 && v[0] == 0){
        for(int i = v.size() - 1; i >= 0; i--){
            cout<< v[i];
        }
    }else{
        cout<< answer << endl;
    }
    
    return 0;
}
