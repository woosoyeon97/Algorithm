//
//  2178.cpp
//  
//
//  Created by 우소연 on 2018. 3. 14..
//

#include <stdio.h>
#include <queue>
#include <iostream>
using namespace std;
int a[1000][1000];
int d[1000][1000];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d",&a[i][j]);
            d[i][j]=0;
        }
    }
    queue<pair<int,int> > q;
    q.push(make_pair(0,0));
    d[0][0]=1;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                if (d[nx][ny]==0 && a[nx][ny] == 1) {
                    q.push(make_pair(nx, ny));
                    d[nx][ny] = d[x][y] + 1;
                }
            }
        }
    }
    printf("%d\n",d[n-1][m-1]);
    return 0;
}
