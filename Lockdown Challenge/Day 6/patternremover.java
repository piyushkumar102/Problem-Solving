/*kids: jkoykoj (Here j,k,o,y are different colours)

order: okj (o colour has to grouped first, k second and j third)

Output: (y is being removed because it is not in the given order)

ookkjj
*/

import java.util.Scanner;

class FindRemainingSoldiers
{
    public static String defeatSoldiers(String soldiers, String pattern)
    {
        while (soldiers.length() > 0)
        {
            int exists = soldiers.indexOf(pattern);
            if (exists == -1)
            {
                break;
            }
            soldiers = soldiers.replace(pattern, "");
        }
        return soldiers;

    }
}

class Pattern
{
    public static void main(String[] args)
    {
        String soldiers, pattern;
        Scanner in = new Scanner(System.in);
        soldiers = in.nextLine();
        pattern = in.nextLine();
        in.close();
        String result = FindRemainingSoldiers.defeatSoldiers(soldiers, pattern);
        if ("" == result)
        {
            System.out.println("Defeat");
        }
        else
            System.out.println(result);

    }
}