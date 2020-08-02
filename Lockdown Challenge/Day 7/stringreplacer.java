import java.util.Scanner;

class StringReplacer
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        String word = in.nextLine();
        String replacer = in.nextLine();
        input = input.replace(word, replacer);
        System.out.println(input);
    }
}