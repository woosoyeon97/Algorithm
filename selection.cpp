//
//  selection.cpp
//  
//
//  Created by 우소연 on 18/07/2020.
//

#include <stdio.h>
#include <iostream>
using namespace std;
//선택정렬
int main(){
    int v[500002] = {0};
    int n;
    cin>> n;
    for(int j = 0; j< n; j++){
        int a;
        cin>>a;
        v[j] = a;
    }
    int min = 0;
    for(int i = 0; i< n - 1; i++){
        min = i;
        for(int j = i ; j< n; j++){
            if(v[min] > v[j]){
                min = j;
            }
        }
        swap(v[min], v[i]);
    }
    for(int f = 0; f < n; f++){
        cout<<v[f] << " ";
    }
    cout<<endl;
    return 0;
}
