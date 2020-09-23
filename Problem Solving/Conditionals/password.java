import java.util.Scanner;

class Password
{
    public static void main(String[] args)
    {
        int i, u = 0, l = 0, num = 0, spe = 0;
        String password;
        Scanner in = new Scanner(System.in);
        password = in.nextLine();
        if (password.length() > 8 && password.length() < 15)
        {
            for (i = 0; i < password.length(); i++)
            {
                if (password.charAt(i) >= 'A' && password.charAt(i) <= 'Z')
                {
                    u++;
                }
                else if (password.charAt(i) >= 'a' && password.charAt(i) <= 'z')
                {
                    l++;
                }
                else if (password.charAt(i) >= '0' && password.charAt(i) <= '9')
                {
                    num++;
                }
                else
                {
                    spe++;
                }
            }
            if (u != 0 && l != 0 && num != 0 && spe != 0)
            {
                System.out.println(password + " is a valid password");
            }
            else
            {
                System.out.println(password + " is a invalid password");

            }
        }
        else
        {
            System.out.println(password + " is a invalid password");

        }

    }
}