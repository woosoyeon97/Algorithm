//
//  2870.cpp
//  
//
//  Created by 우소연 on 27/07/2020.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>

using namespace std;

bool sortvec(string a, string b){
    if(a.size() < b.size()){
        return true;
    }else if(a.size() == b.size()){
        if(stod(a) < stod(b)){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int temp;
    vector<string> v;
    string a;
    for(int i = 0; i< n;i++){
        cin>>a;
        string num = "";
        int start = 0;
        int currentstart = 0;
        for(int j = 0; j< a.size(); j++){
            temp = a[j] - '0';
            if(temp >= 0 && temp <= 9){
                num += a[j];
                if(temp == 0 && start != -1){// 0일경우
                    start++;
                }
                if(temp != 0 && start != -1){//0이 아닐경우
                    num = a[j];
                    start = -1;
                }
                if(temp == 0 && j == a.size() - 1){
                    currentstart++;
                }
            }
            if(temp > 9 || j == (a.size() - 1)){
                if(num != ""){
                    if(start != -1){
                        v.push_back("0");
                    }else{
                        v.push_back(num);
                    }
                    start = 0;
                    num = "";
                }
            }
        }
    }
    sort(v.begin(), v.end(), sortvec);
    vector<string> v2;
    for(int i = 0; i< v.size(); i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
