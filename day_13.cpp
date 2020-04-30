class Solution {
public:
    int findMaxLength(vector<int>& nums) {
      unordered_map<int, int> hM; 
        int n=nums.size();
  
    int sum = 0; // Initialize sum of elements 
    int max_len = 0; // Initialize result 
    int ending_index = -1; 
  
    for (int i = 0; i < n; i++) 
        nums[i] = (nums[i] == 0) ? -1 : 1; 
  
    // Traverse through the given array 
  
    for (int i = 0; i < n; i++) { 
        // Add current element to sum 
  
        sum += nums[i]; 
  
        // To handle sum=0 at last index 
  
        if (sum == 0) { 
            max_len = i + 1; 
            ending_index = i; 
        } 
  
        // If this sum is seen before, then update max_len 
        // if required 
  
        if (hM.find(sum + n) != hM.end()) { 
            if (max_len < i - hM[sum + n]) { 
                max_len = i - hM[sum + n]; 
                ending_index = i; 
            } 
        } 
        else // Else put this sum in hash table 
            hM[sum + n] = i; 
    } 
  
 //   for (int i = 0; i < n; i++) 
     //   arr[i] = (arr[i] == -1) ? 0 : 1; 
  
 //   printf("%d to %d\n", ending_index - max_len + 1, ending_index); 
  
    return max_len; 
} 
};
