//
//  10451.cpp
//  
//
//  Created by 우소연 on 2018. 2. 18..
//

#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[1002];
int check[1002];
void dfs(int x){
    if(check[x]==1){
        return;
    }
    check[x]=1;
    dfs(a[x]);
}
int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            a[i]=0;
            check[i]=0;
        }
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int cnt=0;
        for(int j=1;j<=n;j++){
            if(check[j]==0){
                dfs(a[j]);
                cnt++;
            }
        }
        cout<<cnt<<'\n';
        t--;
    }
    return 0;
}
