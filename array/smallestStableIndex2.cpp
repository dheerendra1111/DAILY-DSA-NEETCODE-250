class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();
        int idx = 0;
        int globalMax = INT_MIN;
        int ansMax = INT_MIN;

        for (int i = 0; i < n; i++) {
            globalMax = max(globalMax, nums[i]);

            if (i == idx)
                ansMax = max(ansMax, nums[i]);

            if (nums[i] < ansMax - k) {
                idx = i + 1;
                ansMax = globalMax;
            }
        }
        return idx < n ? idx : -1;
    }
};