//
//  2667-2.cpp
//  
//
//  Created by 우소연 on 2018. 3. 7..
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int> c[630];
int a[25][25];
int check[630]={0};
void dfs(int x){
    if(check[x]==1){
        return;
    }
    check[x]=1;
    for(int i=0;i<c[x].size();i++){
        int p=c[x][i];
        if(check[p]==0){
            dfs(p);
        }
    }
}
int main(){
    int a[25][25];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int w;
            cin>>w;
            a[i][j]=w;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                c[i].push_back(j);
                c[j].push_back(i);
            }
        }
    }
    for(int i=0;i<n;i++){
        sort(c[i].begin(),c[i].end());
    }
    int cnt=0;
    for(int j=0;j<n;j++){
        if(check[j]==0){
            dfs(j);
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}
