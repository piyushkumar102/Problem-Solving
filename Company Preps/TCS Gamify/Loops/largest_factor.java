import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Largest_factor
{
    public static void main(String[] args)
    {
        long n, k;
        Scanner inp = new Scanner(System.in);
        ArrayList<Integer> factors = new ArrayList<>();
        n = inp.nextLong();
        k = inp.nextLong();
        if ((n >= 2) && (k >= 2))
        {
            int i;
            for (i = 1; i <= n; i++)
            {
                if (n % i == 0)
                {
                    factors.add(i);
                }
            }
            factors.sort(Collections.reverseOrder());
            System.out.println(factors.get((int) (k - 1)));
        }
    }
}