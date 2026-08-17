class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            int sum=0;
            sum+=nums[i]+ans[i-1];
            ans.push_back(sum);
        }
        return ans;
    }
};