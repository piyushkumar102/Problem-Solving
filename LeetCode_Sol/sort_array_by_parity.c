void swap(int *px, int *py) /* interchange *px and *py */
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *sortArrayByParity(int *A, int ASize, int *returnSize)
{
    int i = -1;
    int j = 0;
    int n = ASize;
    *returnSize = ASize;
    while (j < ASize)
    {
        if (A[j] % 2 == 0)
        {
            i++;
            swap(&A[j], &A[i]);
        }
        j++;
    }
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < ASize; i++)
    {
        ptr[i] = A[i];
    }
    return ptr;
}