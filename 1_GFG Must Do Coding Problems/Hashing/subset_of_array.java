import java.util.HashSet;
import java.util.Scanner;

public class subset_of_array
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i, flag = 0;
        int[] array_1 = new int[n];
        for (i = 0; i < n; i++)
        {
            array_1[i] = in.nextInt();
        }
        int m = in.nextInt();
        int[] array_2 = new int[m];
        for (i = 0; i < m; i++)
        {
            array_2[i] = in.nextInt();
        }
        in.close();
        HashSet<Integer> hash = new HashSet<>();
        for (i = 0; i < n; i++)
        {
            hash.add(array_1[i]);
        }
        for (i = 0; i < m; i++)
        {
            if (!hash.contains(array_2[i]))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            System.out.println("Not a Sub-Array");
        }
        else
        {
            System.out.println("Sub-Array");
        }
    }
}
