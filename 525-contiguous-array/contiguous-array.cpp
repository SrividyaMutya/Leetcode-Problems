class Solution {
public:
    int findMaxLength(vector<int>& nums) {
          unordered_map<int,int> mp;
		mp[0]=-1;
		int cnt=0,mx=0;
		for(int i=0;i<nums.size();i++){
			if(nums[i]==0)
				cnt--;
			else cnt++;
			if(mp.find(cnt)!=mp.end())
				mx=max(mx,i-mp[cnt]);
			else
				mp[cnt]=i;
		}
		return mx;
    }
};