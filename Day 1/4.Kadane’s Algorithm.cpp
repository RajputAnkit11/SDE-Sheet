class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int bestMax = INT_MIN;
        int currentMax = 0;
        
        for(int i=0;i<nums.size();i++){
            currentMax = max(nums[i], currentMax + nums[i]);
            bestMax = max(bestMax,currentMax);
        }
        
        return bestMax;
    }
};
