int findKthLargest(int *nums, int numsSize, int k)
{
    int i, j, temp;
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    return nums[numsSize - k];
}