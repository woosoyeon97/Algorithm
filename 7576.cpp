//
//  7576.cpp
//  
//
//  Created by 우소연 on 2018. 3. 14..
//

#include <stdio.h>
#include<iostream>
#include<queue>
using namespace std;
int a[1000][1000];
int d[1000][1000];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int main(){
    int n,m;
    cin>>m>>n;
    queue<pair<int,int> > q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            d[i][j]=-1;
            if(a[i][j]==1){
                q.push(make_pair(i,j));
                d[i][j] = 0;
            }
        }
    }
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(0<=nx && nx<n && 0<=ny && ny<m){
                if(a[nx][ny] == 0 && d[nx][ny]==-1){
                    d[nx][ny]=d[x][y]+1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(d[i][j]>result){
                result=d[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(d[i][j]==-1 && a[i][j]==0){
                result=-1;
            }
        }
    }
    cout<<result<<'\n';
    return 0;
}
