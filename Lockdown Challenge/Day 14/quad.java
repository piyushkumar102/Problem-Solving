import java.util.Scanner;

class Quad
{
    int[] x = new int[4];
    int[] y = new int[4];
    void coordinates(int[] a, int[] b)
    {
        int i;
        for (i = 0; i < 4; i++)
        {
            x[i] = a[i];
            y[i] = b[i];
        }
    }
}
class Square extends Quad
{
    Square(int[] a, int[] b)
    {
        super.coordinates(a, b);
    }
    int area()
    {
        int d = (int) Math.sqrt((Math.pow((x[0] - x[1]), 2) + Math.pow((y[0] - y[1]), 2)));
        return d * d;
    }
}
class Rectangle extends Quad
{
    Rectangle(int[] a, int[] b)
    {
        super.coordinates(a, b);
    }

    int area()
    {
        int d1 = (int) Math.sqrt((Math.pow((x[0] - x[1]), 2) + Math.pow((y[0] - y[1]), 2)));
        int d2 = (int) Math.sqrt((Math.pow((x[0] - x[3]), 2) + Math.pow((y[0] - y[3]), 2)));
        return d1 * d2;
    }
}
class Trapezoid extends Quad
{
    int height;
    Scanner inp = new Scanner(System.in);

    Trapezoid(int[] a, int[] b, int h)
    {
        super.coordinates(a, b);
        this.height = h;
    }

    int area()
    {
        int d1 = (int) Math.sqrt((Math.pow((x[0] - x[1]), 2) + Math.pow((y[0] - y[1]), 2)));
        int d2 = (int) Math.sqrt((Math.pow((x[2] - x[3]), 2) + Math.pow((y[2] - y[3]), 2)));
        return ((d1 + d2) * height) / 2;
    }
}
class Parallelogram extends Quad
{
    int height;

    Parallelogram(int[] a, int[] b, int h)
    {
        super.coordinates(a, b);
        this.height = h;

    }

    int area()
    {
        int d1 = (int) Math.sqrt((Math.pow((x[0] - x[1]), 2) + Math.pow((y[0] - y[1]), 2)));
        return (d1 * height);
    }
}
class Shape
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int i, h;
        int[] a = new int[4];
        int[] b = new int[4];
        for (i = 0; i < 4; i++)
        {
            a[i] = in.nextInt();
            b[i] = in.nextInt();
        }
        h = in.nextInt();
        Square sq = new Square(a, b);
        Rectangle r = new Rectangle(a, b);
        Trapezoid t = new Trapezoid(a, b, h);
        Parallelogram p = new Parallelogram(a, b, h);
        System.out.println(sq.area());
        System.out.println(r.area());
        System.out.println(t.area());
        System.out.println(p.area());
    }
}