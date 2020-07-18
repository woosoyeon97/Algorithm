//
//  insert.cpp
//  
//
//  Created by 우소연 on 18/07/2020.
//

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
//삽입 정렬
int main(){
    vector<int> v;
    int n;
    cin>> n;
    for(int j = 0; j< n; j++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i = 1; i< n; i++){
        for(int k = i - 1; k >= 0; k--){
            if((v[k] > v[i])){
                if(k == 0){
                    v.insert(v.begin() + k, v[i]);
                    v.erase(v.begin() + i + 1);
                    break;
                }else{
                    if(v[i] > v[k-1]){
                        v.insert(v.begin() + k, v[i]);
                        v.erase(v.begin() + i + 1);
                        break;
                    }
                }
            }
        }
    }
    for(int f = 0; f < n; f++){
        cout<<v[f] << " ";
    }
    cout<<endl;
    return 0;
}
