class Solution {
public:
    int singleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                ans=nums[i];
                break;
            }
            else
                i=i+1;
        }
        if(ans==INT_MAX)
            return nums[nums.size()-1];
        return ans;
    }
};
