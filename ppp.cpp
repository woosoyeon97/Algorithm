//
//  ppp.cpp
//  
//
//  Created by 우소연 on 12/08/2020.
//

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > v;
        vector<char> v1;
        vector<pair<string, int> > m;
        for(int i = 0; i< strs.size(); i++){
            v1.clear();
            for(int j = 0; j< strs[i].size(); j++){
                v1.push_back(strs[i][j]);
            }
            sort(v1.begin(), v1.end());
            string s = "";
            for(int j = 0; j< strs[i].size(); j++){
                s += v1[j];
            }
            m.push_back(make_pair(s, i));
        }
        sort(m.begin(), m.end());
        vector<string> str;
        for(int j = 0; j< strs.size(); j++){
            int index = m[j].second;
            if(m[j].first == ""){
                str.push_back("");
            }else{
                str.push_back(strs[index]);
            }
            if((j + 1) != strs.size()){
                if((m[j].first) != (m[j + 1].first)){
                    v.push_back(str);
                    str.clear();
                }
            }else{
                v.push_back(str);
            }
        }
        return v;
    }
};
