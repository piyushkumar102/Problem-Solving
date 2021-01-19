import java.util.Scanner;

class Solution {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        String[] words = in.nextLine().split(" ");
        in.close();
        for (int i = 0; i < words.length; i++) {
            StringBuilder rev = new StringBuilder(words[i]);
            System.out.println(rev.reverse() + " ");
        }

    }
}