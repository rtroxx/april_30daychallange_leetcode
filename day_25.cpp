class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()<=1)
            return true;
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(m<i)
                return false;
            m=max(m,i+nums[i]);
        }
        return true;
        
    }
};
