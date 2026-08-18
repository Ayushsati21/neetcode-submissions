class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxFreq = 0,ans=0;
        vector<int> freq(26, 0);
         for(int i=0;i<s.size();i++){
            freq[s[i]-'A']++;
            maxFreq=max(maxFreq,freq[s[i]-'A']) ;
            int replace=(i-left+1)-maxFreq;
            if(replace>k){
                freq[s[left] - 'A']--;
                left++;
            }
                ans = max(ans, i - left + 1);
        }
        return ans;
    }
};
