//missing number
int missingNumber(int* nums, int numsSize){
    int i,j,c;
    for(i=0;i<numsSize+1;i++){
        c=0;
        for(j=0;j<numsSize;j++){
            if(i==nums[j]){
                c+=1;
            }
        }
    if(c==0){
        return i;
    }    
    }
return 0;
}
