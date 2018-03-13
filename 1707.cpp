//
//  1707.cpp
//  
//
//  Created by 우소연 on 2018. 2. 18..
//

#include <stdio.h>
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int check[20002];
vector<int> a[20002];
void dfs(int x,int k){
    if(k==1){
        check[x]=2;
    }else if(k==2){
        check[x]=1;
    }
    for(int i=0;i<a[x].size();i++){
        int p=a[x][i];
        int k=check[x];
        if(check[p]==0){
            dfs(p,k);
        }
    }
}

int main(){
    int n;
    cin>>n;
    while(n!=0){
        int v,e;
        cin>>v>>e;
        for(int i=0;i<=v;i++){
            check[i]=0;
            a[i].clear();
        }
        for(int i=0;i<e;i++){
            int u,k;
            cin>>u>>k;
            a[u].push_back(k);
            a[k].push_back(u);
        }
        for(int i=1;i<=v;i++){
            if(check[i]==0){
                dfs(i,1);
            }
        }
        int q=0;
        for(int i=1;i<=v;i++){
            for(int j=0;j<a[i].size();j++){
                int k=a[i][j];
                if(check[k]==check[i]){
                    q=1;
                }
            }
        }
        if(q==1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
        n--;
    }
    return 0;
}
