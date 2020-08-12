//
//  1076.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main(){
    long long a[3] = {0};
    map<string, int> m;
    m.insert(make_pair("black", 0));
    m.insert(make_pair("brown", 1));
    m.insert(make_pair("red", 2));
    m.insert(make_pair("orange", 3));
    m.insert(make_pair("yellow", 4));
    m.insert(make_pair("green", 5));
    m.insert(make_pair("blue", 6));
    m.insert(make_pair("violet", 7));
    m.insert(make_pair("grey", 8));
    m.insert(make_pair("white", 9));
    for(int i =0; i< 3; i++){
        string temp;
        cin>>temp;
        long long temp2 = (m.find(temp) -> second);
        a[i] = temp2;
    }
    long long answer = 0;
    answer += a[0] * 10;
    answer += a[1];
    answer *= pow(10, a[2]);
    cout<< answer<<endl;
    
    return 0;
}
