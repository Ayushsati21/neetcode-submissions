class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> ans;
         int length=0,maxi=0,j=0;
         for(int i=0;i<s.size();i++){
            ans[s[i]]++;
            while(ans[s[i]]>1){
                ans[s[j]]--;
                j++;
            }
            length=i-j+1;
          maxi=max(maxi,length);
         }
         return maxi;
    }
};
