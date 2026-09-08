class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>v;
        for(string i : op){
            if(i=="C"){
                v.pop_back();
            }else if(i=="+"){
                int n=v.size();
                v.push_back(v[n-1]+v[n-2]);
            }else if(i=="D"){
                v.push_back(2*v.back());
            }else{
                v.push_back(stoi(i));
            }
        }
        int sum=0;
        for(int j : v){
            sum+=j;
        }
        return sum;
    }
};