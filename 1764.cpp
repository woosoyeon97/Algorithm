//
//  1764.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n, k;
    map<string, int> m;
    int cnt = 0;
    cin>> n>> k;
    for(int i = 0; i< (n + k); i++){
        string str;
        cin>> str;
        if(m.find(str) == m.end()){
            m.insert(make_pair(str, 1));
        }else{
            m[str] = 2;
            cnt += 1;
        }
    }
    cout<< cnt << endl;
    for(auto it = m.begin(); it != m.end(); it++){
        if(it -> second == 2){
            cout<< it -> first<< endl;
        }
    }
    return 0;
}
