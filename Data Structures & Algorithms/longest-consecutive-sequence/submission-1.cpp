class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        for(int x : nums)
            st.insert(x);

        int maxi = 0;

        for(int x : st) {

            // x is the beginning of a sequence
            if(st.find(x - 1) == st.end()) {

                int current = x;
                int length = 1;

                while(st.find(current + 1) != st.end()) {
                    current++;
                    length++;
                }

                maxi = max(maxi, length);
            }
        }

        return maxi;
    }
};