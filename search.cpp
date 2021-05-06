class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int mid=-1;
        if(n==0) return -1;
        if(n==1) return target==nums[0]? 0:-1;
            
        while(left<=right){
     
            mid=left+(right-left)/2;
            if(nums[mid]==target) return mid;

            if(nums[mid]>=nums[0]){
                if(target>=nums[left]&& target<nums[mid]){right=mid-1;}
                else{left=mid+1;}
            }else{
                if(target>nums[mid]&& target<=nums[right]){left=mid+1;}
                else{right=mid-1;}
            }
        }
        return -1;
    }
};