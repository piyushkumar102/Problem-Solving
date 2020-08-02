class AgeNotWithinRangeException extends Exception
{
    AgeNotWithinRangeException(String s)
    {
        super(s);
    }
}

class NameNotValidException extends Exception
{
    NameNotValidException(String s)
    {
        super(s);
    }
}

class Student
{
    int classrollno;
    String classname;
    int classage;
    String classcourse;

    Student(int rollno, String name, int age, String course)
    {
        classrollno = rollno;
        classname = name;
        classage = age;
        classcourse = course;
    }

    void checkage() throws AgeNotWithinRangeException, NameNotValidException
    {
        if (classage < 15 || classage > 21)
        {
            throw new AgeNotWithinRangeException("Age is not between 15 and 21");

        } else
        {
            throw new NameNotValidException("Blah");
        }
        //System.out.println(classage);
    }

}

class Details
{
    public static void main(String[] args)
    {
        Student s = new Student(19, "Piyush", 11, "MBA");
        try
        {
            s.checkage();
        } catch (Exception e)
        {
            System.out.println(e);
        }
    }
}