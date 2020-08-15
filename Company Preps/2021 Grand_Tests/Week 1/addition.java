import java.util.Scanner;

class Addition {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        in.close();
        int c = a + b;
        System.out.println(c);
    }
}