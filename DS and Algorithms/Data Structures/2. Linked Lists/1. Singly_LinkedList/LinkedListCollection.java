import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Scanner;

class LinkedListExample
{
    public static void main(String[] args)
    {
        LinkedList<Integer> list = new LinkedList<>();
        ArrayList<Integer> arrlist = new ArrayList<>();
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i;
        for (i = 0; i < n; i++)
        {
            list.add(in.nextInt());
        }
        for (i = 0; i < n; i++)
        {
            arrlist.add(list.get(i));
        }
        list.add(3, 6);
        list.addAll(arrlist);
        for (i = 0; i < list.size(); i++)
        {
            System.out.print(list.get(i) + " ");
        }
        list.addLast(100);
        list.addFirst(1000);
        list.addAll(1, arrlist);
        list.toArray();
        System.out.println(list.element());
        System.out.println(list.contains(1));
        System.out.println(list.getClass().getName());
        System.out.println("Complete list : " + list);
        list.clear();
        System.out.println(list);
    }
}