import java.util.Scanner;
public class Program24
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
           sName = scanner.next();// next -  till space come  .it is used to accept word . 
          System.out.println("Welcome " +sName);

    }
}
