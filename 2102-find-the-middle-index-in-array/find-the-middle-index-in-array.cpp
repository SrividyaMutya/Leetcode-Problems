class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int t=0;
        for(int x:nums) t+=x;
        int l=0;
        for(int i=0;i<nums.size();i++){
            int r=t-l-nums[i];
            if(l==r) return i;
            l+=nums[i];
        }
        return -1;
    }
};