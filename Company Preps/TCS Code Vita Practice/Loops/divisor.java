import java.util.ArrayList;
import java.util.Scanner;

class divisor {
    public static void main(String[] args) {
        int n;
        Scanner inp = new Scanner(System.in);
        n = inp.nextInt();
        inp.close();
        ArrayList<Integer> divisors = new ArrayList<Integer>();
        int i;
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisors.add(i);
            }
        }
        for (int numbers : divisors) {
            System.out.print(numbers + " ");
        }
    }
}