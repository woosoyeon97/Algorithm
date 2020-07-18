//
//  bubble.cpp
//  
//
//  Created by 우소연 on 18/07/2020.
//

#include <stdio.h>
#include <iostream>
using namespace std;
//버블정렬

int main(){
    int n,a;
    int v[500002] = {0};
    cin>>n;
    
    for(int i = 0; i< n; i++){
//        scanf("%d", &a);
        cin>>a;
        v[i] = a;
    }
    for(int j = 0; j< n; j++){
        for(int k = 0; k< n - j - 1; k++){
            if(v[k+1] < v[k]){
                swap(v[k], v[k+1]);
            }
        }
    }
    for(int f = 0; f < n; f++){
        cout<<v[f] << " ";
    }
    cout<<endl;
    
    return 0;
}
