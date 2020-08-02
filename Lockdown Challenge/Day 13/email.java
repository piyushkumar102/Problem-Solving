import java.util.Scanner;

class MailValidator
{
    boolean checkvalidity(String mailid)
    {
        String domainpart = mailid.substring((mailid.indexOf('@')) + 1);
        String domain = domainpart.substring((domainpart.indexOf('.') + 1));
        String site = mailid.substring(mailid.indexOf('@'));
        if (domainpart.contains("@") || site.length() == 1 || !mailid.contains("."))
            return false;
        return domain.contentEquals("com") || domain.contentEquals("net") || domain.contentEquals("biz") || domain.contentEquals("in");

    }
}

class MailSolution
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String email = in.nextLine();
        MailValidator ev = new MailValidator();
        if (ev.checkvalidity(email))
        {
            System.out.println("Valid :" + email);
        } else
            System.out.println("Invalid :" + email);
    }
}