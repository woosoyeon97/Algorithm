

//
//  1377-2.cpp
//  
//
//  Created by 우소연 on 2018. 2. 17..
//

#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    int cnt=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int k=a[i].second-i+1;
        if(k>cnt){
            cnt=k;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}
