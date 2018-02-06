//
//  2745.cpp
//  
//
//  Created by 우소연 on 2018. 2. 7..
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
    string a;
    int b,k;
    int sum=0;
    cin>>a>>b;
    k=a.size();
    for(int i=0;i<k;i++){
        if('0'<=a[i] && a[i]<='9'){
            sum+=(a[i]-'0')*pow(b,k-i-1);
        }else{
            int p=a[i]-'A'+10;
            sum+=p*pow(b,k-i-1);
        }
    }
    cout<<sum<<'\n';
    return 0;
}
