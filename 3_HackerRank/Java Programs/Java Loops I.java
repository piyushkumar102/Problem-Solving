import java.util.Scanner;
class Solution1
{
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args)
    {
        int N = scanner.nextInt();
        int i, prod;
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        for (i = 1; i <= 10; i++)
        {
            prod = N * i;
            System.out.printf("%d x %d = %d\n", N, i, prod);
        }
        scanner.close();
    }
}
