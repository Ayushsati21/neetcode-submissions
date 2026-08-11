class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        long long mul = 1;
        int zeroCount = 0;

        for(int x : nums) {

            if(x == 0)
                zeroCount++;
            else
                mul *= x;
        }

        vector<int> output;

        for(int x : nums) {

            if(zeroCount >= 2) {
                output.push_back(0);
            }
            else if(zeroCount == 1) {

                if(x == 0)
                    output.push_back(mul);
                else
                    output.push_back(0);
            }
            else {
                output.push_back(mul / x);
            }
        }

        return output;
    }
};