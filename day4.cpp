class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int c=0;
        for(auto i:nums){
            if(i==0)c++;
        }
        nums.erase(std::remove(nums.begin(), nums.end(), 0), nums.end());
        while(c--)nums.push_back(0);
    }
};
