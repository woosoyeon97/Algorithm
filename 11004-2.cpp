//
//  11004-2.cpp
//  
//
//  Created by 우소연 on 2018. 2. 17..
//

#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    int a[5000000];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    nth_element(a,a+k-1,a+n);
    printf("%d\n",a[k-1]);
    return 0;
}
