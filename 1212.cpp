
//
//  1212.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int q,r;
    int k=a.size();
    for(int i=0;i<k;i++){
        int b[4]={0,};
        int p=a[i]-'0';
        b[0]=p%2;
        q=p/2;
        int c=1;
        while(q!=0){
            r=q%2;
            q=q/2;
            b[c]=r;
            c++;
        }
        if(i==0){
            for(int j=c-1;j>=0;j--){
                cout<<b[j];
            }
        }else{
            for(int j=2;j>=0;j--){
                cout<<b[j];
            }
        }
    }
    return 0;
}


