import java.util.Scanner;

public class difference_of_squares {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        a = a * a;
        int b = in.nextInt();
        b = b * b;
        System.out.println(a - b);
        in.close();
    }

}