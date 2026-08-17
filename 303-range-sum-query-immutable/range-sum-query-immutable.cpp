class NumArray {
public:
vector<int>nums;
vector<int>pre;
    NumArray(vector<int>& nums) {
        nums=nums;
        int rs=0;
        for(int i=0;i<nums.size();i++){
            rs+=nums[i];
            pre.push_back(rs);
        }
    }
    int sumRange(int left, int right) {
        if(left==0)return pre[right];
        return pre[right]-pre[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */