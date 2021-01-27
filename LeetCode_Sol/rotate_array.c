void rotate(int *nums, int numsSize, int k)
{
    int i, j, temp;
    for (i = 0; i < k + 1; i++)
    {
        temp = nums[0];
        for (j = 0; j < numsSize - 1; j++)
        {
            nums[j] = nums[j + 1];
        }
        nums[numsSize - 1] = temp;
    }
}