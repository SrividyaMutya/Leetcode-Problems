class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>b=nums;
        sort(b.begin(),b.end());
        int left=0;
        int right=nums.size()-1;
        while(left<nums.size()&&nums[left]==b[left])
            left++;
        if(left==nums.size())
            return 0;
        while(nums[right]==b[right])
            right--;
        return right-left+1;
    }
};