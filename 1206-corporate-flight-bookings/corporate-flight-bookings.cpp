class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& b, int n) {
        vector<int>v(n,0);
        for(int i=0;i<b.size();i++){
            int l=b[i][0];
            int r=b[i][1];
            int val=b[i][2];
        for(int j=l-1;j<r;j++){
            v[j]+=val;
        }
        }
        return v;
    }
};