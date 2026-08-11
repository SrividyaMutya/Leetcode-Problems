class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size()<p.size())  return ans;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(char c:p)
            m1[c]++;
        for(int i=0;i<s.size();i++){
            m2[s[i]]++;
         if(i>=p.size()){ 
         m2[s[i-p.size()]]--;
         if(m2[s[i-p.size()]]==0)
         m2.erase(s[i-p.size()]);
         }
         if(i>=p.size()-1 && m1==m2) ans.push_back(i-p.size()+1);
        }
         return ans;
    }
};