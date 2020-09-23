import java.util.Scanner;

class Police
{
    public static void main(String[] args)
    {
        int count = 0, n, sum = 0;
        Scanner in = new Scanner(System.in);
        int i, j, k;
        n = in.nextInt();
        k = in.nextInt();

        char[][] g = new char[n][n];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                g[i][j] = in.next().charAt(0);
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (g[i][j] == 'T')
                {
                    count++;
                    if (count > k)
                    {
                        break;
                    }
                    else
                        sum = sum + count;
                }
            }
            System.out.println("Row "+sum);

            count = 0;
        }
        System.out.println(sum);
    }
}