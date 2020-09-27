import java.util.HashMap;
import java.util.Scanner;

public class two_equal_arrays
{
    public static void main(String[] args)
    {
        int n, i;
        Scanner in = new Scanner(System.in);
        HashMap<Integer, Integer> hash = new HashMap<Integer, Integer>();
        n = in.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int count = 0;
        for (i = 0; i < n; i++)
        {
            a[i] = in.nextInt();
            if (hash.get(a[i]) == null)
            {
                hash.put(a[i], 1);
            }
            else
            {
                count = hash.get(a[i]);
                count++;
                hash.put(a[i], count);
            }
        }
        for (i = 0; i < n; i++)
        {
            b[i] = in.nextInt();
            if (!hash.containsKey(b[i]))
            {
                System.out.println("Not Equal");
                System.exit(1);
            }
            if (hash.get(b[i]) == 0)
            {
                System.out.println("Not Equal");
                System.exit(1);
            }

            count = hash.get(b[i]);
            count--;
            hash.put(b[i], count);
        }
        System.out.println("Equal");
    }
}
