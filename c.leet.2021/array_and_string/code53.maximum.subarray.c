/*
 * try to use kadane's algorithm after naive one is implemented.
 *
 */

#define KADANE  1
#define NAIVE 0

#if KADANE
/*
 * O(n)
 * runtime : 0 ms
 */
int maxSubArray(int* nums, int numsSize){
    int sum = 0, result = INT_MIN;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        if (sum < nums[i]) sum = nums[i];
        if (sum > result) result = sum;
    }

    return result;
}
#elif NAIVE
/*
 * O(n^2)
 * runtime: 400ms
 */
int maxSubArray(int* nums, int numsSize)
{
    int i, j;
    int r = nums[0];

    for(i = 0; i < numsSize; i++)
    {
        int s = 0;
        for(j = i; j < numsSize; j++)
        {
            s += nums[j];
            if(s > r)
                r = s;
        }
    }
    return r;
}
#else
#endif
