class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        vector<int> dp(nums);
        int m_max=nums[0];
        for(int i=1;i<nums.size();i++){
            dp[i]=max(nums[i],nums[i]+dp[i-1]);
            m_max=max(m_max,dp[i]);
        }
        return m_max;
    }
};