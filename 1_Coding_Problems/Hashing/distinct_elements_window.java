import java.util.HashSet;
import java.util.Scanner;

public class distinct_elements_window
{
    public static void  main(String args[])
    {
        int n;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        int i;
        int[] a = new int[n];
        int window=in.nextInt();
        for (i = 0; i < n; i++)
        {
            a[i] = in.nextInt();
        }
        int count=0;
        int k=0;
        HashSet<Integer> hash=new HashSet<>();
        for (i = 0; i < n; i++)
        {
            try
            {
                for (int j = i; j < window + i; j++)
                {
                    if (!hash.contains(a[j]))
                    {
                        hash.add(a[j]);
                        count++;
                    }
                }
            }
            catch (Exception e)
            {
                break;
            }
            hash.clear();
            System.out.print(count+" ");
            count = 0;
        }
    }
}
