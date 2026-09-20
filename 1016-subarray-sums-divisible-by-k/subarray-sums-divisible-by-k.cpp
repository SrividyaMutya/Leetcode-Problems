class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int s=0,a=0;
        for(int x:nums){
            s+=x;
            int rem=s%k;
            if(rem<0)
            rem+=k;
            if(mp.count(rem))
            a+=mp[rem];
            mp[rem]++;
        }
        return a;
    }
};