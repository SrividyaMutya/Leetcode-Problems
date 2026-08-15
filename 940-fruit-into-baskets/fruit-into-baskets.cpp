class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int,int>m;
        int i=0;
        int ans=0;
        for(int j=0;j<f.size();j++){
            m[f[j]]++;
        while(m.size()>2){
            m[f[i]]--;
            if(m[f[i]]==0) 
            m.erase(f[i]);
            i++;
        }
        ans=max(ans,j-i+1);
        }
        return ans;
    }
};