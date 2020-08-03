//
//  15702.cpp
//  
//
//  Created by 우소연 on 03/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}
int main(){
    int n, m;
    cin>> n>> m;
    vector<int> score;
    for(int i = 0; i< n; i++){
        int temp = 0;
        cin >> temp;
        score.push_back(temp);
    }
    vector<pair<int, int> > name;
    for(int j = 0; j< m; j++){
        int tmpnum;
        cin>> tmpnum;
        int total = 0;
        for(int k = 0; k< n; k++){
            string ox;
            cin>>ox;
            if(ox[0] == 'O'){
                total += score[k];
            }
        }
        name.push_back(make_pair(total, tmpnum));
    }
    sort(name.begin(), name.end(), comp);
    cout<< name[0].second << " " << name[0].first << endl;
    return 0;
}
