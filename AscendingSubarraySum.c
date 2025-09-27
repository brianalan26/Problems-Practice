int maxAscendingSum(int* nums, int numsSize) {
    int curr=nums[0] ; int max = nums[0];
    for(int i = 1 ; i < numsSize ; i ++){
        if(nums[i]>nums[i-1]){
            curr+=nums[i];
        }else{
            curr=nums[i];
        }
        if(curr>max) max= curr;
    }
    return max;
}
