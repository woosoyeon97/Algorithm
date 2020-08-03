//
//  1296.cpp
//  
//
//  Created by 우소연 on 03/08/2020.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    string name;
    vector<string> v;
    cin>> name;
    cin>> n;
    for(int i = 0; i< n; i++){
        string temp;
        cin>> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int max = -1;
    int index = -1;
    //    L계산
    int array[4] = {0};
    //    int ohminsik[4];
    int ohminsik[4] = {0};
    for(int j = 0; j< name.size(); j++){
        if(name[j] == 'L'){
            ohminsik[0]++;
        }else if(name[j] == 'O'){
            ohminsik[1]++;
        }else if(name[j] == 'V'){
            ohminsik[2]++;
        }else if(name[j] == 'E'){
            ohminsik[3]++;
        }
    }
    for(int i = 0; i< n; i++){
        int temp[4] = {0};
        for(int j = 0; j< v[i].size(); j++){
            if(v[i][j] == 'L'){
                temp[0]++;
            }else if(v[i][j] == 'O'){
                temp[1]++;
            }else if(v[i][j] == 'V'){
                temp[2]++;
            }else if(v[i][j] == 'E'){
                temp[3]++;
            }
        }
        
        int allcnt[4] = {temp[0] + ohminsik[0], temp[1] + ohminsik[1], temp[2] + ohminsik[2], temp[3] + ohminsik[3]};
        int answer = ((allcnt[0] + allcnt[1]) * (allcnt[0] + allcnt[2]) * (allcnt[0] + allcnt[3]) * (allcnt[1] + allcnt[2]) * (allcnt[1] + allcnt[3]) * (allcnt[2] + allcnt[3])) % 100;
        if(max < answer){
            max = answer;
            index = i;
        }
    }
    cout<< v[index]<<endl;
    return 0;
}
