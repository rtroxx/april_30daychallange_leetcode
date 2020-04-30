class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        long long ans=0,f=0;
        for(int i=0;i<shift.size();i++){
                if(shift[i][0]==0)
                    ans-=shift[i][1];
                else
                    ans+=shift[i][1];
            }
            string p;
        if(ans<0){
            f=1;
            ans=abs(ans);}
            long long l=ans%s.size();
       // cout<<l<<endl;
            if(f==0){
                for(int i=s.size()-l;i<s.size();i++)p+=s[i];
                for(int i=0;i<s.size()-l;i++)p+=s[i];
               // p=reverse(s.begin(), s.begin()+l); 
            }
            else{
                l=abs(l);
               for(int i=l;i<s.size();i++)p+=s[i];
            for(int i=0;i<l;i++)p+=s[i];
        }
        return p;
    }
};
