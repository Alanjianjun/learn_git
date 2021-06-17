class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ret;
        ret.reserve(1024);
        for(int i=0;i<nums.size();++i)
        {
            for (int j=i+1;j<nums.size();++j){
                if(nums[i]+nums[j]==target)
                {
                    ret.push_back(i);
                    ret.push_back(j);
                    return ret;
                }
            }
        }
        return ret;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_table;
        int myTarget=0;
        for(int i=0;i<nums.size();i++){
            myTarget=target-nums[i];
            if (hash_table.count(myTarget)){
                return {hash_table[myTarget],i};
            }
            hash_table[nums[i]]=i;
        }
        return {};
    }
};