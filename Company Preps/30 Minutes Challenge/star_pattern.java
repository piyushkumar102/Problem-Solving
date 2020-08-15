import java.util.Scanner;

public class star_pattern {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i, spaces, t, j;
        t = n;
        for (i = 1; i <= n; i++) {
            for (spaces = 1; spaces < t; spaces++) {
                System.out.print(" ");
            }
            t = t - 1;
            for (j = 1; j <= (2 * i) - 1; j++) {
                System.out.print("*");
            }

            System.out.println("\n");
        }
    }
}