class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i=0;i<stones.size();i++)
            q.push(stones[i]);
        
        while(q.size()!=1){
            int t1=q.top();
            q.pop();
            int t2=q.top();
            q.pop();
            q.push(t1-t2);
        }
        return q.top();
    }
};
