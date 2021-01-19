import java.util.Scanner;

class ArraySolution
{

    public static void main(String[] arg)

    {
        int i, b;
        int[] a = new int[1000000];

        Scanner input = new Scanner(System.in);
        b = input.nextInt();
        for (i = 0; i < b; i++)
        {
            a[i] = input.nextInt();
        }
        for (i = b - 1; i >= 0; i--)
        {
            System.out.print(a[i] + " ");
        }

    }
}