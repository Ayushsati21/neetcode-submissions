class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())
            return 0;

        set<int> s;

        for(int x : nums) {
            s.insert(x);
        }

        int length = 1;
        int maxi = 1;

        auto it = s.begin();
        auto prev = it;
        it++;

        while(it != s.end()) {

            if(*it == *prev + 1) {
                length++;
            }
            else {
                length = 1;
            }

            maxi = max(maxi, length);

            prev = it;
            it++;
        }

        return maxi;
    }
};