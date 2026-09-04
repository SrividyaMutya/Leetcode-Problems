class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int sum) {
        int max=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>max){
                max=v[i];
            }
        }
        vector<bool>res;
        for(int i=0;i<v.size();i++){
            res.push_back(v[i]+sum>=max);
        }
        return res;
    }
};