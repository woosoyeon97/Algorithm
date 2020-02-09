//
//  1012.cpp
//  
//
//  Created by 우소연 on 22/01/2020.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int a[52][52] = {0};


int main(){
    int T, M, N, K;
    cin>>T;
    while(T>0){
        int x, y;
        cin>>M>>N>>K;
        int cnt = K;
        while(cnt > 0){
            cin>>x>>y;
            a[x][y] = 1;
            cnt--;
        }
        for(int i=0; i<M;i++){
            for(int j=0 ; j<N; j++){
                if(a[i][j] == 1){
                    
                }
            }
        }
        
        
        T--;
    }
    return 0;
}
