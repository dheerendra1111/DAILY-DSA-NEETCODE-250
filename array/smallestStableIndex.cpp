class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suffix(n,0);
        
        int m=INT_MAX;
        for(int i=n-1;i>=0;i--){
            m=min(m,nums[i]);
            suffix[i]=m;
        }

        int x=0;
        for(int i=0;i<n;i++){
            x=max(x,nums[i]);
            int score=x-suffix[i];
            if(score<=k) return i;
        }
        return -1;
       
    }
};