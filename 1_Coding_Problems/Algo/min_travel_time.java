import java.util.Scanner;

public class min_travel_time {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int v1 = in.nextInt();
        int v2 = in.nextInt();
        in.close();
        double steps = Math.sqrt(2) * n / v1;
        float elevator = (2 * n / v2);
        if (elevator < steps) {
            System.out.println(elevator);
        } else
            System.out.println(steps);
    }

}