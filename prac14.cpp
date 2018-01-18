//
//  prac14.cpp
//  
//
//  Created by 우소연 on 2018. 1. 19..
//
//

#include <iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
   
    for(int i='a';i<='z';i++){
        for(int j=0;j<a.size();j++){
            if(i==a[j]){
                if(a[j])
                for(int k=j;k<a.size();k++){
                    cout<<a[k];
                }
                cout<<'\n';
            }
        }
    }
    return 0;
}
