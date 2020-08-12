//
//  1931.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(const pair<int, int> &a,const pair<int, int> &b){
    return a.second < b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, int> > v;
    for(int i = 0; i< n; i++){
        int a, b;
        cin>> a>> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), comp);
    int endtime = v[0].second;
    int cnt = 1;
    for(int i = 1; i< n; i++){
        if(endtime <= v[i].first){
            endtime = v[i].second;
            cnt++;
        }
    }
    cout<< cnt<<endl;
    return 0;
}
