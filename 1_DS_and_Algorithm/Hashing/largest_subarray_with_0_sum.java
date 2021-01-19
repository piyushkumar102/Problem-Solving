import java.util.HashMap;
import java.util.Scanner;

public class largest_subarray_with_0_sum
{
    public static void main(String[] args)
    {
        int n;
        Scanner in = new Scanner(System.in);
        HashMap<Integer, Integer> hash = new HashMap<>();
        n = in.nextInt();
        int[] a = new int[n];
        int i, sum = 0, max_len = 0;
        for (i = 0; i < n; i++)
        {
            a[i] = in.nextInt();
            sum = sum + a[i];
            if (a[i] == 0 && max_len == 0)
                max_len = 1;
            if (sum == 0)
                max_len = i + 1;
            if (hash.containsKey(sum))
            {
                int hash_index = hash.get(sum);
                max_len = Math.max(max_len, i - hash_index);
            }
            if (!hash.containsKey(sum))
            {
                hash.put(sum, i);
            }
        }
        System.out.println(max_len);
    }
}
