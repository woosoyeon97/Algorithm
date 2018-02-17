//
//  11651.cpp
//  
//
//  Created by 우소연 on 2018. 2. 15..
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Person{
    int age;
    string name;
};
bool operator<(const Person &a, const Person &b){
    return a.age<b.age;
}
int main(){
    int n;
    cin>>n;
    vector<Person> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].age>>p[i].name;
    }
    stable_sort(p.begin(),p.end());
    for(int j=0;j<n;j++){
        cout<<p[j].age<<" "<<p[j].name<<'\n';
    }
    return 0;
}

