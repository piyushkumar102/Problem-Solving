import java.util.*;

import static java.util.Collections.*;

public class relative_sorting
{
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        HashMap<Integer,Integer> hash=new HashMap<>();
        int n=in.nextInt();
        int m=in.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        int i,count=0;
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
        for (i = 0; i < m; i++)
        {
            b[i] = in.nextInt();
        }
        for(i=0;i<m;i++)
        {
            for(int j=0;j<hash.get(b[i]);j++)
            {
                System.out.print(b[i]+" ");
            }
            hash.remove(b[i]);
        }
        Set<Integer> keySet = hash.keySet();
        ArrayList<Integer> listOfKeys=new ArrayList<Integer>(keySet);
        Collections.sort(listOfKeys);
        for(Integer x:listOfKeys)
        {
            System.out.print(x+" ");
        }
    }
}
