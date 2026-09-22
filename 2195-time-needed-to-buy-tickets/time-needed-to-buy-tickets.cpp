class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        queue<int>q;
        for(int i=0;i<t.size();i++){
            q.push(i);
        }
        int time=0;
        while(t[k]>0){
            int p=q.front();
            q.pop();
            t[p]--;
            time++;
            if(t[p]>0){
                q.push(p);
            }
        }
        return time;
    }
};