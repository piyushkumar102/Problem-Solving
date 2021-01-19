import java.util.*;

class Solution {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        System.out.println(n);
            long i, difficulty;
            ArrayList<Long> bugs = new ArrayList<Long>();
            for (i = 0; i < n; i++) {
                int option;
                option = in.nextInt();
                if (option == 1) {
                    difficulty = in.nextLong();
                    bugs.add(difficulty);
                    Collections.sort(bugs, Collections.reverseOrder());

                } else if (option == 2) {
                    try {
                        int rank = bugs.size() / 3;
                        System.out.println(bugs.get(rank - 1));
                    } catch (Exception e) {
                        System.out.println("Not enough enemies");
                        continue;
                    }

                }
            }
    }
}