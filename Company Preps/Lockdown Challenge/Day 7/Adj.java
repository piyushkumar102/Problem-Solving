import java.util.Scanner;

class adj
{
    public static void main(String[] arg)
    {
        int i;
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        String newstring = "";
        for (i = 0; i < input.length() - 1; i++)
        {
            //System.out.println(input.charAt(i));
            if (input.charAt(i) == input.charAt(i + 1))
            {
                newstring = newstring + input.charAt(i) + "*";
            } else
            {
                newstring = newstring + input.charAt(i);
            }
        }
        newstring = newstring + input.charAt(input.length() - 1);
        System.out.println(newstring);
    }
}