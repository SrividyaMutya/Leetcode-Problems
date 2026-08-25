class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        vector<int>v;
        int m=a.size();
        int n=a[0].size();
        for(int i=0;i<m;i++){
            int rsum=0;
            for(int j=0;j<n;j++){
          rsum+=a[i][j];
            }
            v.push_back(rsum);
        }
   int max=v[0];
for(int i=0;i<v.size();i++){
    if(v[i]>max){
        max=v[i];
    }
}
return max;
    }
};