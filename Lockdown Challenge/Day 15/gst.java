package Day.Day15;

import java.util.Scanner;

interface Product
{
    void ProductDetails();

    void show_Bill();
}

class Customer implements Product
{
    int n, total = 0;

    public void ProductDetails()
    {
        int i;
        String name;
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        int cost;
        for (i = 0; i < n; i++)
        {
            in.nextLine();
            name = in.nextLine();
            cost = in.nextInt();
            total += cost;
        }
        if (total > 10000 && total <= 30000)
        {
            total += (total * 5 / 100);
        } else if (total > 30000 && total <= 50000)
            total += (total * 7 / 100);
        else if (total > 50000)
            total += (total * 9 / 100);
    }

    @Override
    public void show_Bill()
    {
        System.out.println("Bill:" + total);
    }
}

class Bill
{
    public static void main(String[] args)
    {
        Customer c = new Customer();
        Scanner in = new Scanner(System.in);
        c.ProductDetails();
        c.show_Bill();

    }
}