class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr(n+1);
        arr[0]=0;
        for(int i=1;i<=n;i++){
            int x=i;
            int count=0;
            while(x!=0){
                if(x&1){
                    count++;
                }
                x=x>>1;
            }
            arr[i]=count;
        }
        return arr;
    }
};
