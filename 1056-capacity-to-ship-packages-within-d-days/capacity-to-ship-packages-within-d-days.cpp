class Solution {
public:
    bool canShip(vector<int>&wts,int days,int cap){
        int currWt=0;
        int usedDays=1;
        for(int wt:wts){
            if(currWt+wt>cap){
                usedDays++;
                currWt=0;
            }
            currWt+=wt;
        }
        return usedDays<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        while(l<=h){
            int mid=l+(h-l)/2;
            if(canShip(weights,days,mid)){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};