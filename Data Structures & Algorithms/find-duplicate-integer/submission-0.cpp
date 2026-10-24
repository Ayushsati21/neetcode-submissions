class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++)
       {
            ans[nums[i]-1]++;
        }
        for(int i=0;ans.size();i++)
        {
            if(ans[i]>=2)
            {
                return i+1;
            }
        }
    }
};
