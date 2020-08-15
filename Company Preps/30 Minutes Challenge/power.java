import java.util.Scanner;
import java.lang.Math;
public class power {
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        double a = in.nextDouble();
        double b = in.nextDouble();
        double c = Math.pow(a, b);
        in.close();
        System.out.println(c);
    }
    
}