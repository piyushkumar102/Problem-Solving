import java.util.Scanner;

abstract class ItemType
{
    public abstract double calculateamount();
}

class Wooden extends ItemType
{
    int noOfItems;
    double cost;

    Wooden(int item, double rate)
    {
        noOfItems = item;
        cost = rate;
    }

    @Override
    public double calculateamount()
    {
        return noOfItems * cost;
    }
}

class Electronics extends ItemType
{
    String item;
    double cost;

    Electronics(String type, double rate)
    {
        item = type;
        cost = rate;
    }

    @Override
    public double calculateamount()
    {
        if (item.contains("Academics"))
        {
            return cost - (0.05 * cost);
        } else
            return cost;
    }
}

class Billing
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int choice = in.nextInt();
        if (choice == 1)
        {
            int item = in.nextInt();
            double rate = in.nextDouble();
            Wooden item1 = new Wooden(item, rate);
            System.out.println(item1.calculateamount());
        } else if (choice == 2)
        {
            String type ;
            type=in.next();
            System.out.println(type);
            double rate = in.nextDouble();
            Electronics eitem1 = new Electronics(type, rate);
            System.out.println(eitem1.calculateamount());
        }
    }
}