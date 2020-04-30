class Solution {
public:
    int countElements(vector<int>& arr) {
        int n=arr.size(),ans=0;
        int a[1001]={0};
        if(n==1)
            return 0;
        for( auto i:arr)
            a[i]++;
        sort(arr.begin(),arr.end());
        vector<int>::iterator ip;
         ip = std::unique(arr.begin(), arr.begin() + n);
         arr.resize(std::distance(arr.begin(), ip));
        for(auto i:arr)
            cout<<i<<" ";
        if(arr.size()==1)
            return 0;
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==1)
            {
                ans+=a[arr[i]];
                
            }
        }
        return ans;
        
    }
};
