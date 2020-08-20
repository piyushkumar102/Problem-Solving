import java.util.Scanner;
import java.util.Stack;

public class balanced_paranthesis
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String str = "";
        Stack<Character> braces = new Stack<Character>();
        str = in.nextLine();
        int i;
        for (i = 0; i < str.length(); i++)
        {
            char chr = str.charAt(i);
            if (chr == '(' || chr == '[' || chr == '{')
            {
                braces.push(chr);
            }
            if (chr == '}')
            {
                if(braces.pop()=='{')
                    continue;
            }
            else if (chr == ')')
            {
                if(braces.pop()=='(')
                    continue;
                else
                    break;
            }
            else if (chr == ']')
            {
                if(braces.pop()=='[')
                    continue;
                else
                    break;
            }
        }
        if (braces.isEmpty())
        {
            System.out.println("Balanced");
        }
        else
            System.out.println("Unbalanced");
    }
}
