class Solution {
    int solve(int n){
        int ans=0;
        while(n!=0){
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return ans;
    }
public:
    bool isHappy(int n) {
        int s,f;
        s=n;
        f=n;
        do{
        s=solve(s);
        f=solve(solve(f));
        }
        while(s!=f);
            
    return (s==1);
    }
        
};
