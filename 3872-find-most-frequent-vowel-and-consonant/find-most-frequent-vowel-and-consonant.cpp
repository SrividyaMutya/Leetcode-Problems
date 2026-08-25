class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;
        }
        int maxv=0;
        int maxc=0;
        for(int i=0;i<26;i++){
            char c='a'+i;
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                maxv=max(maxv,freq[i]);
            }else{
                maxc=max(maxc,freq[i]);
            }
        }
        return maxv+maxc;
    }
};