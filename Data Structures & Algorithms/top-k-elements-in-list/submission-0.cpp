class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        vector<vector<int>>v(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto x:map){
            int y=x.second;
            v[y].push_back(x.first);
        } int t=0;
        vector<int>c;
        for(int i=v.size()-1;i>0;i--){
        
          for(auto x:v[i]){
                c.push_back(x);
            if(c.size()==k){
                return c;
                
            }

          }
        }
    }
};
