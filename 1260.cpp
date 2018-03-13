//
//  1260.cpp
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
bool check[1001];
void dfs(int x){
    check[x]=true;
    printf("%d ",x);
    for(int i=0;i<a[x].size();i++){
        int p=a[x][i];
        if(check[p]==false){
            dfs(p);
        }
    }
}
void bfs(int x){
    queue<int> q;
    memset(check,false,sizeof(check));
    check[x]=true;
    q.push(x);
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        printf("%d ",temp);
        for(int i=0;i<a[temp].size();i++){
            int p=a[temp][i];
            if(check[p]==false){
                check[p]=true;
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

