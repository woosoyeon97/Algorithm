//
//  15237.cpp
//  
//
//  Created by 우소연 on 03/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

int main(){
    int n;
    int c;
    cin>> n >> c;
    vector<pair<int, int> > v;
    for(int i = 0; i< n; i++){
        int temp = 0;
        cin>> temp;
        v.push_back(make_pair(temp, i));
    }
    vector<pair<int, int> > v2 = v;
    sort(v.begin(), v.end());
    
    vector<pair<int, int> > cnt;
    int index = 0;
    int count = 0;
    for(int i = 0; i<n; i++){
        if(v[index].first == v[i].first){
            count++;
        }else if(v[index].first != v[i].first){
            cnt.push_back(make_pair(count, v[index].second));//갯수, v의 처음 위치
            index = i;
            count = 1;
        }
        if(i == (n - 1) && count >= 1){
            cnt.push_back(make_pair(count, v[index].second));
        }
    }
    sort(cnt.begin(), cnt.end(), comp);

    for(int i = 0; i< cnt.size(); i++){
        for(int j = 0; j< cnt[i].first; j++){
            cout<< v2[cnt[i].second].first << " ";
        }
    }
    
    return 0;
}
