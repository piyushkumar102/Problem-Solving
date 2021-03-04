int maxSubArray(int *nums, int numsSize)
{
    int total = 0, i;
    int n, max_sum = -100000;
    for (i = 0; i < numsSize; i++)
    {
        total = total + nums[i];
        if (total >= max_sum)
        {
            max_sum = total;
        }
        if (total < 0)
            total = 0;
    }
    if (numsSize < 0)
    {
        return -1;
    }
    else
        return max_sum;
}