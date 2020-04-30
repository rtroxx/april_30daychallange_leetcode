class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long n=nums.size(),p,r;
        long long t;
         int* pre = new int[sizeof(int) * n]; 
    int* su = new int[sizeof(int) * n]; 
        pre[0]=1;
        su[n-1]=1;
        vector<int> prod;
       // pre.push_back
        for(int i=1;i<n;i++){
          // p=pre[i-1]*nums[i-1];
           // pre.push_back(p);
            pre[i]=pre[i-1]*nums[i-1];
            
        }
        for(int i=n-2;i>=0;i--){
            su[i]=su[i+1]*nums[i+1];
        }
       // for(int i=0;i<n;i++)cout<<su[i]<<" "<<pre[i]<<endl;
        for(int i=0;i<n;i++){
            t=su[i]*pre[i];
           // cout<<t<<endl;
            prod.push_back(t);
            //prod[i]=su[i]*pre[i];
        }
        return prod;
        
    }
};
