/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    //Given an array, calculate the running sum, where each element is the sum of all previous elements and itself.
     
     for(int i=1;i<numsSize;i++)
     {
        nums[i]= nums[i]+nums[i-1];
     }
     *returnSize=numsSize;

     return nums;

    
}
