class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;
        for(int i=0;i<strs.size();i++){
            int freq[26]={0};
            string s=strs[i];
            for(int j=0;j<s.length();j++){
                freq[s[j]-'a']++;
            }
           string key="";
           for(int j=0;j<26;j++){
            key+=to_string(freq[j])+"#";
           }
           map[key].push_back(strs[i]);
        }
        vector<vector<string>>a;
        for(auto &pair:map){
            a.push_back(pair.second);
        }
        return a;
    }
};
