int searchInsert(int* nums, int numsSize, int target){
    int index=numsSize;
    for(int i=0;i<numsSize;i++){
        if (nums[i]==target)
            return i;
        else if(nums[i]>target)
            return i;
        else if(target>nums[i]&&i==numsSize-1){
            return index;
        }
    }
    return index;
}
