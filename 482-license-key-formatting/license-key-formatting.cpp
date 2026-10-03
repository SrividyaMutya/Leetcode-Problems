class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string t="";
        for(char c:s){
            if(c!='-')
                t+=toupper(c);
        }
        int n=t.size();
        int first=n%k;
        string ans="";
        if(first>0)
            ans+=t.substr(0,first);
        for(int i=first;i<n;i+=k){
            if(!ans.empty())
                ans+="-";
            ans+=t.substr(i,k);
        }
        return ans;
    }
};