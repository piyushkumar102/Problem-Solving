import java.util.HashSet;
import java.util.Scanner;

public class uncommon_characters
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String sentence1 = in.next();
        String sentence2 = in.next();
        int i;
        HashSet<Character> hash = new HashSet<>();
        for (i = 0; i < sentence1.length(); i++)
        {
            char a = sentence1.charAt(i);
            hash.add(a);
        }
        for (i = 0; i < sentence2.length(); i++)
        {
            char a = sentence2.charAt(i);
            if (hash.contains(a))
            {
                hash.remove(a);
            }
            else
            {
                hash.add(a);
            }
        }
        for (Character character : hash)
        {
            System.out.print(character);
        }
    }
}
