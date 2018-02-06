//
//  1676.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(i%5==0){
            int k=i;
            r=i%5;
            while(r==0){
                k=k/5;
                cnt++;
                r=k%5;
            }
        }
    }
    cout<<cnt;
    return 0;
}
