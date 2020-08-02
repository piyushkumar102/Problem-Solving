import java.util.Scanner;

class Address
{
    String street;
    String city;
    int pincode;
    String country;

    Address(String street, String city, int pincode, String country)
    {
        this.street = street;
        this.city = city;
        this.pincode = pincode;
        this.country = country;
    }

    void viewDetails()
    {
        System.out.println("Street: " + street);
        System.out.println("City: " + city);
        System.out.println("Pincode: " + pincode);
        System.out.println("Country: " + country);
    }
}

class Add
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String street = in.nextLine();
        String city = in.nextLine();
        int pincode = in.nextInt();
        String country = in.nextLine();
        Address details = new Address(street, city, pincode, country);
        details.viewDetails();
    }
}