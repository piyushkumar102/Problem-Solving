import java.util.Scanner;

abstract class AbstractClass
{
    int val;
    abstract int getvalue();
    abstract int divisorsum(int val);

}
class Calculator extends AbstractClass
{
    public int getvalue()
    {
        Scanner in=new Scanner(System.in);
        val=in.nextInt();
        return val;
    }

    public int divisorsum(int val)
    {
        int i,sum=0;
        for(i=1;i<=val;i++)
        {
            if(val%i==0)
            {
                sum=sum+i;
            }

        }
        return sum;
    }
}
class Operations
{
public static void main(String args[])
    {
        Calculator op1=new Calculator();

        System.out.print(op1.divisorsum( op1.getvalue()));
    }
}