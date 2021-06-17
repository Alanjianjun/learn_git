class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0&&nums[slow]==0){
                nums[slow]=nums[i];
                nums[i]=0;
                slow++;
            }else if(nums[i]!=0&&nums[slow]!=0){slow++;}
        }
    }
};
// i is fast pointer to find non_zero, slow is slow pointer to record non_zero