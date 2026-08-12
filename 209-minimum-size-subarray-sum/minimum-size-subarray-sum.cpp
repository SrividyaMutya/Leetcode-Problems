class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=INT_MAX;
        int left=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target){
                l=min(l,i-left+1);
                sum-=nums[left];
                left++;
            }
        }
        if(l==INT_MAX){
         return 0;
        }else{
            return l;
        }
    }
};