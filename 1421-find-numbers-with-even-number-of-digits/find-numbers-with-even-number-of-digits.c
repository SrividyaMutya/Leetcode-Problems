int findNumbers(int* nums, int numsSize) {
    int i,digitcnt=0,rem;
    for(i=0;i<numsSize;i++){
        int cnt=0;
        while(nums[i]!=0){
            rem=nums[i]%10;
            nums[i]=nums[i]/10;
             cnt++;
        }
    if(cnt%2==0){
        digitcnt++;
    }
    }
    return digitcnt;
    
}