class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
         int n = nums.size();

    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - i - 1; j++) {

            if(nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
        for(int i=0;i<nums.size();i++){
            if(i > 0 && nums[i] == nums[i-1])
                       continue;
            int x=-nums[i];
            int j=i+1,k=nums.size()-1;
            while(j<k){
                int sum=nums[j]+nums[k];
                  if(sum==x){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1])
                                 j++;

                  while(j < k && nums[k] == nums[k+1])
                            k--;
                   
                  }
                  else if(sum>x){
                    k--;
                  }
                  else{
                        j++;  
                  }
            }
        }
        return ans;

    }
};
