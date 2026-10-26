class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int maxi=0;
        int nse=0,pse=0,element=0;
        for(int i=0;i<heights.size();i++)
        {
            while(!s.empty()&&heights[i]<heights[s.top()])
            {
                element=s.top();
                s.pop();
                nse=i;
                if(s.empty())
                {
                    pse=-1;
                }
                else{
                pse=s.top();
                }
                maxi=max(maxi,(heights[element])*(nse-pse-1));
            }
            s.push(i);
        }
        while(!s.empty())
        {
            element=s.top();
            s.pop();
            nse=heights.size();
             if(s.empty())
                {
                    pse=-1;
                }
            else{
                pse=s.top();
                }
              maxi=max(maxi,(heights[element])*(nse-pse-1));

        }
        return maxi;
    }
};
