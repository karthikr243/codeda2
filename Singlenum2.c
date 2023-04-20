//singlenumber2
int singleNumber(int* nums, int numsSize){
    int x,y,ct;
    for(x=0;x<numsSize;x++){
        ct=0;
        for(y=0;y<numsSize;y++){
            if(nums[x]==nums[y]){
                ct+=1;
            }
        }
        if (ct==1){
            return nums[x];
        }
    }
    return 0;
}
