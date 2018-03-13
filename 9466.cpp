//
//  9466.cpp
//  
//
//  Created by 우소연 on 2018. 2. 19..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int check[100002];
int a[100002];
int b[100002];
int dfs(int x){
    check[x]++;
    if(check[x]==x){
        return 0;
    }
    if(check[x]>2){
        return 0;
    }
    return dfs(a[x]);
}
int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                check[j]=0;
            }
            if(check[i]==0){
                cnt+=dfs(i);
            }
        }
        cout<<cnt<<'\n';
        t--;
    }
    return 0;
}
