class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int>mp;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<vector<int>>bucket(nums.size()+1);

        for(auto it: mp){
            int e=it.first;
            int freq=it.second;

            bucket[freq].push_back(e);
        }
        for(int f=nums.size(); f>=1; f--){
            for(int element : bucket[f]){
                ans.push_back(element);
                
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};