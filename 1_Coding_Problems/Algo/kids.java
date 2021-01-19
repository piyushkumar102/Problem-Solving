import java.util.Scanner;

class kids
{
    public static void main(String[] args)
    {
        String kids, order;
        int i, j, flag = 0;
        Scanner in = new Scanner(System.in);
        kids = in.nextLine();
        order = in.nextLine();
        for (i = 0; i < order.length(); i++)
        {
            for (j = 0; j < kids.length(); j++)
            {
                if (order.charAt(i) == kids.charAt(j))
                {
                    flag = 1;
                    System.out.print(order.charAt(i));
                }
            }
        }
        if (flag == 0)
        {
            System.out.println("No");
        }
    }
}