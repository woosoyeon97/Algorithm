//
//  11004.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//

#include <stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
void quicksort(int a[],int start,int end,int k){
    int p=0;
    int c;
    int left=start+1;
    int right=end;
    while(left<right){
        while(a[left]<a[p]){
            left++;
        }while(a[right]>a[p]){
            right--;
        }if(left<right){
            int temp=a[left];
            a[left]=a[right];
            a[right]=temp;
        }
    }
    a[0]=a[right];
    a[right]=p;
    if(k<right){
        quicksort(a,start,right-1,k);
    }else{
        quicksort(a,right+1,end,k);
    }
}
int main(){
    int n, k;
    int a[500002];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1,k);
    cout<<a[k-1]<<'\n';
    return 0;
}
