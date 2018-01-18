//
//  prac9.cpp
//  
//
//  Created by 우소연 on 2018. 1. 19..
//
//

#include <iostream>
#include<deque>
#include<string>
using namespace std;
int main(){
    int n;
    cin>> n;
    
    deque<int> d;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="push_front"){
            int num;
            cin>>num;
            d.push_front(num);
        }else if(s=="push_back"){
            int num;
            cin>>num;
            d.push_back(num);
        }else if(s=="pop_front"){
            if(d.empty()==1){
                cout<<-1<<'\n';
            }else{
                cout<<d.front()<<'\n';
                d.pop_front();
            }
        }else if(s=="pop_back"){
            if(d.empty()==1){
                cout<<-1<<'\n';
            }else{
                cout<<d.back()<<'\n';
                d.pop_back();
            }
        }else if(s=="size"){
            cout<<d.size()<<'\n';
        }else if(s=="empty"){
            cout<<d.empty()<<'\n';
        }else if(s=="front"){
            if(d.empty()==1){
                cout<<-1<<'\n';
            }else{
                cout<<d.front()<<'\n';
            }
        }else if(s=="back"){
            if(d.empty()==1){
                cout<<-1<<'\n';
            }else{
                cout<<d.back()<<'\n';
            }
        }
    }
    return 0;
}
