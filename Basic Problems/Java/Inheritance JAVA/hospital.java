import java.util.Scanner;

class Patient
{
    String patientid, name, age, gender;
    String Address, contact;
    void display()
    {
        System.out.println("ID: " + patientid);
    }
}

class In_patient extends Patient
{
    String roomno;
    int fee;
    int testfee;
    String doj;
    String dod;
    int days;
    int roomrent;
    void display()
    {
        super.display();
        System.out.println("Room NO:");
    }
}

class Bill extends In_patient
{
    String dob;
    int totalfee;
    void display()
    {
        super.display();
        System.out.println("Total Fee: " + totalfee);
    }
}

class Hospital
{
    public static void main(String[] args)
    {
        Bill p1 = new Bill();
        Scanner in = new Scanner(System.in);
        p1.patientid = in.nextLine();
        p1.roomno = in.nextLine();
        p1.totalfee = 200;
        p1.display();
    }
}