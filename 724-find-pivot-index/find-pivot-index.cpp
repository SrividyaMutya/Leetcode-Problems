class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>v;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int sum=0;
            sum+=nums[i]+v[i-1];
            v.push_back(sum);
        }
        for(int i=0;i<v.size();i++){
            int l=0,r=0;
            if(i>0)
            l=v[i-1];
            r=v[v.size()-1]-v[i];

            if(l==r){
                return i;
            }
        }
        return -1;
    }
};