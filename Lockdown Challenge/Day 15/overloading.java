import java.util.Scanner;

class Overloader
{
    int a, b, c;

    int fun1(int a, int b)
    {
        return a + b;
    }

    int fun1(int a, int b, int c)
    {
        return a * b * c;
    }
}

class Overloading
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        Overloader o = new Overloader();
        int a, b, c, n;
        n = in.nextInt();
        if (n == 2)
        {
            a = in.nextInt();
            b = in.nextInt();
            System.out.println(o.fun1(a, b));
        } else if (n == 3)
        {
            a = in.nextInt();
            b = in.nextInt();
            c = in.nextInt();
            System.out.println(o.fun1(a, b, c));

        }

    }
}