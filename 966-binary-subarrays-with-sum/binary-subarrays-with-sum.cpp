class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int s=0,a=0;
        for(int x:nums){
            s+=x;
            if(mp.count(s-goal))
            a+=mp[s-goal];
            mp[s]++;
        }
        return a;
    }
};