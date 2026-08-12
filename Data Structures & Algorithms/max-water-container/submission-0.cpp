class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;
       int i=0,j=heights.size()-1;
       while(i<j){
        int w=j-i;
        int area=w*min(heights[i],heights[j]);
        maxi=max(maxi,area);
        if(heights[i]<heights[j]){
            i++;
        }
        else if(heights[i]>heights[j]){
            j--;
           }
        else{
            i++;j--;
        }}
     return maxi;
    }
};
