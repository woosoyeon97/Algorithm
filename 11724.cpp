//
//  11724.cpp
//  
//
//  Created by 우소연 on 2018. 2. 18..
//

#include <stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a[1002];
int check[1002]={0};
void dfs(int x){
    check[x]=1;
    for(int i=0;i<a[x].size();i++){
        int p=a[x][i];
        if(check[p]==0){
            dfs(p);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int j=1;j<=n;j++){
        sort(a[j].begin(),a[j].end());
    }
    int cnt=0;
    for(int k=1;k<=n;k++){
        if(check[k]==0){
            dfs(k);
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
