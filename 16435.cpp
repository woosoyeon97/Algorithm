//
//  16435.cpp
//  
//
//  Created by 우소연 on 03/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, l;
    cin>> n >> l;
    vector<int> v;
    for(int i = 0; i< n; i++){
        int temp = 0;
        cin>> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int lastidx = 0;
    for(int i = lastidx; i < n; i++){
        if(v[i] <= l){
            lastidx = i;
            l++;
        }
    }
    cout<< l<<endl;
    
    return 0;
}
