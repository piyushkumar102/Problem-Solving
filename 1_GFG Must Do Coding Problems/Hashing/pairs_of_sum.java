import java.util.Scanner;

public class pairs_of_sum
{
    public static void main(String[] args)
    {
        int n;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        int i;
        int[] a = new int[n];
        for (i = 0; i < n; i++)
        {
            a[i] = in.nextInt();
        }
        int sum = in.nextInt();
        for (i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == sum)
                    System.out.println(a[i] + " " + a[j]);
            }
        }
    }
}
