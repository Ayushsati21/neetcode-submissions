class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed)
     {
        int n=position.size();
        vector<pair<int,int>>fleet;
        for(int i=0;i<n;i++)
        {
            fleet.push_back({position[i],speed[i]});
        }
        sort(fleet.begin(),fleet.end(),greater<pair<int,int>>());
        stack<double>s;
        for(int i=0;i<n;i++)
        {
            double time= (double)(target-fleet[i].first)/fleet[i].second;

            if(s.empty()||time>s.top())
            {
                s.push(time);
            }
        }
        return s.size();
     }
};
