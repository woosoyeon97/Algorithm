//
//  1260-2.cpp
//  
//
//  Created by 우소연 on 2018. 2. 18..
//

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
vector<int> a[1001];
int check2[1001]={0};
int check[1001]={0};
void dfs(int x){
    check[x]=1;
    printf("%d ",x);
    for(int i=0;i<a[x].size();i++){
        int p=a[x][i];
        if(check[p]==0){
            dfs(p);
        }
    }
}
void bfs(int x){
    queue<int> q;
    check2[x]=1;
    q.push(x);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        printf("%d ",temp);
        for(int i=0;i<a[temp].size();i++){
            int p=a[temp][i];
            if(check2[p]==0){
                check2[p]=1;
                q.push(p);
            }
        }
    }
}
int main(){
    int n,m,v;
    scanf("%d %d %d",&n,&m,&v);
    for(int i=0;i<m;i++){
        int u,v;
        scanf("%d %d",&u,&v);
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        sort(a[i].begin(),a[i].end());
    }
    dfs(v);
    cout<<'\n';
    bfs(v);
    cout<<'\n';
    return 0;
}


