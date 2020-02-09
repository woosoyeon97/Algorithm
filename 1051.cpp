//
//  1051.cpp
//  
//
//  Created by 우소연 on 07/02/2020.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int n, m, cha, g;
    int a[51][51] = {-1};
    int max = 0;
    scanf("%d %d", &n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j = 0;j<m-1;j++){
            int cmp = 0;
            cmp = a[i][j];
            for(int k = m-1;k>j;k--){
                if(cmp == a[i][k]){
                    cha = k-j;
                    if(cha+i < n && cmp == a[i+cha][j] && cmp == a[i+cha][k]){
                        cha++;
                        if(max < cha){
                            max = cha;
                        }
                    }
                }
            }
            
        }
    }
    if(max == 0){
        max = 1;
    }
    printf("%d", max*max);
    return 0;
}
