import java.util.Scanner;

class DotException extends Exception
{
    DotException(String s)
    {
        super(s);
    }
}
class AtTheRateException extends Exception
{
    AtTheRateException(String s)
    {
        super(s);
    }
}
class DomainException extends Exception
{
    DomainException(String s)
    {
        super(s);
    }
}
class MailValidatorExceptions
{
    boolean checkvalidity(String mailid) throws AtTheRateException, DomainException, DotException
    {
        String domainpart = mailid.substring((mailid.indexOf('@')) + 1);
        String domain = domainpart.substring((domainpart.indexOf('.') + 1));
        String site = mailid.substring(mailid.indexOf('@'));
        if (domainpart.contains("@") || site.length() == 1)
        {
            throw new AtTheRateException("Invalid @ usage");

        }
        if (!mailid.contains(".") || domain.contains("."))
        {
            throw new DotException("Invalid Dot usage");
        }
        if (!(domain.contentEquals("com") || domain.contentEquals("net") || domain.contentEquals("biz") || domain.contentEquals("in")))
        {
            throw new DomainException("Invalid Domain");
        } else
        {
            return true;
        }

    }
}
class Solution
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String email = in.nextLine();
        MailValidatorExceptions ev = new MailValidatorExceptions();
        try
        {
            if (ev.checkvalidity(email))
                System.out.println("Valid :" + email);

        } catch (Exception e)
        {
            System.out.println(e);
            System.out.println("Invalid :" + email);
        }
    }
}