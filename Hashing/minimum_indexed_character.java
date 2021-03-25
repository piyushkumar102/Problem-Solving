import java.util.HashMap;
import java.util.Scanner;

public class minimum_indexed_character
{
    public static void main(String args[])
    {
        HashMap<Character,Integer>hash=new HashMap<>();
        Scanner in = new Scanner(System.in);
        String str=in.next();
        String pat=in.next();
        for(int i=0;i<str.length();i++)
        {
            char x=str.charAt(i);
            if(!hash.containsKey(x))
            {
                hash.put(x, i);
            }
        }
        int min_index=999;
        for(int i=0;i<pat.length();i++)
        {
            char y=pat.charAt(i);
            if(hash.containsKey(y))
            {
                if (hash.get(y) < min_index)
                {
                    min_index = hash.get(y);
                }
            }
        }
        if(min_index==999)
        {
            System.out.println("$");
        }
        else
        {
            System.out.println(str.charAt(min_index));
        }
    }
}
