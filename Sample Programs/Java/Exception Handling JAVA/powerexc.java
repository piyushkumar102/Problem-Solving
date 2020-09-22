import java.util.Scanner;

class PowerExc
{
    public static void main(String[] args) throws Exception
    {
        int a, b, c;
        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        if (a < 0 || b < 0)
            throw new Exception("n and p should be non-negative");
        else if (a == 0 && b == 0)
            throw new Exception("Both n and p should not be zero");
        else
            c = (int) Math.pow(a, b);
        System.out.println(c);


    }
}