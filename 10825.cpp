//
//  10825.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//

#include <stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
struct Person{
    string name;
    int korean;
    int english;
    int math;
};
bool operator<(const Person &a, const Person &b){
    if(a.korean>b.korean){
        return true;
    }else if(a.korean==b.korean){
        if(a.english<b.english){
            return true;
        }else if(a.english==b.english){
            if(a.math>b.math){
                return true;
            }else if(a.math==b.math){
                return a.name<b.name;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<Person> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].name>>p[i].korean>>p[i].english>>p[i].math;
    }
    stable_sort(p.begin(),p.end());
    for(int j=0;j<n;j++){
        cout<<p[j].name<<'\n';
    }
    return 0;
}


