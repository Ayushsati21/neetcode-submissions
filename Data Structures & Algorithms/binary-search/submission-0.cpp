class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right=0,left=nums.size()-1;
        int mid=right+(left-right)/2;
        while(right<=left)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target<nums[mid])
            {
                left=mid-1;
            }
            else
            {
                right=mid+1;
            }
            mid=right+(left-right)/2;
        }
        return -1;
    }
};
