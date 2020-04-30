class Solution {
public:
    bool backspaceCompare(string S, string T) {
       deque<char> q;
        string ans1="";
        string ans2="";
  
    for (int i = 0; i < S.length(); ++i) { 
  
        if (S[i] != '#') 
            q.push_back(S[i]); 
        else if (!q.empty()) 
            q.pop_back(); 
    }
        while(!q.empty()){
            ans1+=q.front();
            q.pop_front();
        }
        q.clear();
         for (int i = 0; i < T.length(); ++i) { 
  
        if (T[i] != '#') 
            q.push_back(T[i]); 
        else if (!q.empty()) 
            q.pop_back(); 
    }
        while(!q.empty()){
            ans2+=q.front();
            q.pop_front();
        }
        return ans1==ans2;
        
    }
};
