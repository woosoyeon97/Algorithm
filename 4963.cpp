//
//  4963.cpp
//  
//
//  Created by 우소연 on 2018. 3. 14..
//

#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int a[100][100];
int d[100][100];
int dx[]={1,-1,0,0,1,1,-1,-1};
int dy[]={0,0,1,-1,1,-1,1,-1};
int n,m;
void bfs(int x,int y,int cnt){
    queue<pair<int,int> > q;
    q.push(make_pair(x,y));
    d[x][y]=cnt;
    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int k=0;k<8;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(nx>=0 && nx<n && ny>=0 && ny<m){
                if(a[nx][ny]==1 && d[nx][ny] == 0){
                    q.push(make_pair(nx,ny));
                    d[nx][ny]=cnt;
                }
            }
        }
    }
}
int main(){
    n=1;
    m=1;
    while(n!=0 && m!=0){
        scanf("%d %d",&m,&n);
        if(n==0 && m==0){
            break;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%1d",&a[i][j]);
                d[i][j]=0;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==1 && d[i][j]==0){
                    bfs(i,j,++cnt);
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
