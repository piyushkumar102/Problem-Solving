import java.util.HashSet;
import java.util.Scanner;

public class missing_element_in_a_range
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i;
        int[] array_1 = new int[n];
        for (i = 0; i < n; i++)
        {
            array_1[i] = in.nextInt();
        }
        int low = in.nextInt();
        int high = in.nextInt();
        in.close();
        HashSet<Integer> hash = new HashSet<>();
        for (i = 0; i < n; i++)
        {
            hash.add(array_1[i]);
        }
        for (i = low; i < high; i++)
        {
            if (!hash.contains(i))
            {
                System.out.print(i + " ");
            }
        }
    }
}
