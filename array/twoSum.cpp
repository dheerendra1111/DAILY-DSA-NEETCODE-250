class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // use sorting and two pointers approch
      int n= nums.size();
        vector<pair<int ,int>>arr;
        for (int i=0; i<n; i++){
            arr.push_back({nums[i],i});
                }
                sort(arr.begin(),arr.end());
                int l=0;
                int r=n-1;
                while(r>l){
              int sum = arr[l].first + arr[r].first;
              if (sum == target){
                return {arr[l].second , arr[r].second};
              }
              if (sum < target){
                l++;
              }else{
                r--;
              }

                }
                 return{}   ;  
    }
};