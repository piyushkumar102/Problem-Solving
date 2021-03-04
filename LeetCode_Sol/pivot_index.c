int pivotIndex(int *nums, int numsSize)
{
    int i, j, k, flag = 0, index;
    for (i = 0; i < numsSize; i++)
    {
        int left_sum = 0;
        int right_sum = 0;
        for (j = 0; j < i; j++)
            left_sum = left_sum + nums[j];
        for (k = i + 1; k < numsSize; k++)
            right_sum = right_sum + nums[k];
        if (left_sum == right_sum)
        {
            index = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        return index;
    }
    else
    {
        return -1;
    }
}