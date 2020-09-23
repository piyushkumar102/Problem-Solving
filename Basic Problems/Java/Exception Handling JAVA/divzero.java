import java.util.Scanner;

class DivZero
{
    public static void main(String[] args)
    {
        int a, b, c;
        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        try
        {
            c = a / b;
            System.out.println(c);
        } catch (Exception e)
        {
            System.out.println(e);
        }

    }
}