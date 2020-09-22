/*Ram gifted a new Vespa scooter to Jannu. But Jannu's father instructed Jannu to drive within speed limits. So every day Jannu's father asks the distance traveled(in km) and time taken(in hrs) to cover the distance. He calculates the speed using given values and check Jannu's speed.
Help Jannu's father to calculate the speed.
Note : Display the result in km/hr unit*/

import java.util.Scanner;

class Speed
{
    public static void main(String[] arg)
    {
        int distance, time;
        float speed;
        Scanner s = new Scanner(System.in);
        s.close();
        distance = s.nextInt();
        time = s.nextInt();
        speed = distance / time;
        System.out.format("%.2f km/hr", speed);
    }
}