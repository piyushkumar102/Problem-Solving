import java.util.Scanner;

class WhiteSpace
{
    public static void main(String[] args)
    {
        String input;
        Scanner in = new Scanner(System.in);
        input = in.nextLine();
        input = input.replaceAll("[\\s]+", " ");
        System.out.println(input);
    }
}