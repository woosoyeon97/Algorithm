//
//  11650.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());
    for(int j=0;j<n;j++){
        cout<<a[j].first<<" "<<a[j].second<<'\n';
    }
    return 0;
}
