//
//  10867.cpp
//  
//
//  Created by 우소연 on 27/07/2020.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    vector <int> v;
    cin>>n;
    for(int i = 0; i< n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for(int i = 0; i< v.size(); i++){
        cout<< v[i]<< " ";
    }
    return 0;
}
