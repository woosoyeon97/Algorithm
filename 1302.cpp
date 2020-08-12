//
//  1302.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, int> m;
    for(int i = 0; i< n; i++){
        string temp;
        cin>> temp;
        if(m.find(temp) == m.end()){
            m.insert(make_pair(temp, 1));
        }else{
            int num = m.find(temp) -> second;
            m[temp] = num + 1;
        }
    }
    int max = -1;
    string key;
    
    for(auto it = m.begin(); it != m.end(); it++){
        if(max < (it -> second)){
            int tmp = it -> second;
            max = tmp;
            key = (it -> first);
        }
    }
    cout<< m.find(key) -> first <<endl;
    return 0;
}
