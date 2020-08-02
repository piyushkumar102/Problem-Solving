import java.util.Scanner;

class Couple
{
    public static void main(String[] args)
    {
        int n, i, j;
        Scanner inp = new Scanner(System.in);
        n = inp.nextInt();
        int[] regno = new int[n];
        int[] count = new int[n];

        for (i = 0; i < n; i++)
        {
            regno[i] = inp.nextInt();
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (regno[i] == regno[j])
                {
                    count[i]++;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            if (count[i] % 2 != 0)
            {
                System.out.println(regno[i]);
            }
        }

    }
}
