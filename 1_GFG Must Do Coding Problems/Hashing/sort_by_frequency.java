import java.util.*;

public class sort_by_frequency
{
    public static void main(String[] args)
    {
        int n, i;
        Scanner in = new Scanner(System.in);
        HashMap<Integer, Integer> hash = new HashMap<Integer, Integer>();
        n = in.nextInt();
        int[] a = new int[n];
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
        Collection<Integer> values = hash.values();
        ArrayList<Integer> listOfKeys;
        listOfKeys = new ArrayList<Integer>(values);
        Collections.sort(listOfKeys);
        System.out.println(listOfKeys);
    }
}

