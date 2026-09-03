class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // using count sort
        unordered_map<int,int>m;
        for(int &num :nums){
            m[num]++;
        }
         int minE=*min_element(begin(nums),end(nums));
        int maxE=*max_element(begin(nums),end(nums));

        int i=0; //index
        for(int num=minE; num<=maxE; num++){

            while(m[num]>0){  //used for frequency
             nums[i]=num;
             i++;
             m[num]--;
            }
        }
        return nums;
    }
};