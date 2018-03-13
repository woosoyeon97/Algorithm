//
//  2146.cpp
//  
//
//  Created by 우소연 on 2018. 3. 14..
//

#include <stdio.h>
#include <iostream>
#include <queue>
using namespace std;
int a[100][100];
int d[100][100];//섬 간척사업장
int r[100][100];//거리구하기
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int n;
void bfs(int x,int y,int cnt){
    queue<pair<int,int> > q;
    q.push(make_pair(x,y));
    r[x][y]=0;
    d[x][y] = cnt;
    while(!q.empty()){
        x=q.front().first;
        y=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(0<=nx && nx<n && 0<=ny && ny<n){
                if(a[nx][ny]==1 && d[nx][ny] == 0){
                    q.push(make_pair(nx,ny));
                    d[nx][ny]=cnt;
                    r[nx][ny]=0;
                }
                
            }
            
        }
        
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            d[i][j]=0;
        }
    }
    //섬의 갯수 셈
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == 1 && d[i][j] == 0) {
                bfs(i, j, ++cnt);
            }
        }
    }
    queue<pair<int,int> > q;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            r[i][j]=-1;
            if(a[i][j]==1){
                q.push(make_pair(i,j));
                r[i][j]=0;
            }
        }
    }
    //간척사업시작
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int k=0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(0<=nx && nx<n && 0<=ny && ny<n){
                if(d[nx][ny]==0 && r[nx][ny] == -1){
                    q.push(make_pair(nx,ny));
                    d[nx][ny]=d[x][y];
                    r[nx][ny]=r[x][y]+1;
                }
            }
        }
    }
    int result = -1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<4; k++) {
                int x = i+dx[k];
                int y = j+dy[k];
                if (0 <= x && x < n && 0 <= y && y < n) {
                    if (d[i][j]!= d[x][y]) {
                        if (result == -1 || result > r[i][j] + r[x][y]) {
                            result = r[i][j] + r[x][y];
                        }
                    }
                }
            }
        }
    }
    cout<<result<<'\n';
    return 0;
}
