//
//  ksnum_programmers.cpp
//  
//
//  Created by 우소연 on 27/07/2020.
//

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> answer;

void comp(vector<int> arr, int start, int end, int indx){
    sort(arr.begin() + start, arr.begin() + end);
    answer.push_back(arr[indx]);
}
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    
    for(int i = 0; i< commands.size(); i++){
        int start = commands[i][0]  - 1;
        int end = commands[i][1];
        int printind  = commands[i][2] - 1 + start;
        comp(array, start, end, printind);
    }
    return answer;
}
