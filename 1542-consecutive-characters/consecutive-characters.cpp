class Solution {
public:
    int maxPower(string s) {
        int maxi=0,cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]) {
                cnt++;
            if(cnt>maxi) maxi=cnt;
            }else{
                cnt=0;
            }
        }
        return maxi+1;
    }
};