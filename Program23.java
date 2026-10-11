import java.util.Scanner;
public class Program23
{
    public static void main (String A [])
    {
        //3 ways
        //main logic *
        //seprate fun**
        //sep class ***
           Scanner scanner = null;
           String sName = null;
         scanner = new Scanner((System.in));
          System.out.println("Enter Your Name:");
           sName = scanner.nextLine();
          System.out.println("Welcome " +sName);

    }
}
