import java.util.Scanner;
public class Program27
{
    public static void main (String A [])
    {
        //3 ways
        //main logic *
        //seprate fun**
        //sep class ***
           Scanner scanner = null;
           String sName = null;
           int iAge = 0;
           float fMarks = 0.0; //: error: incompatible types: possible lossy conversion from double to float

         scanner = new Scanner((System.in));
          System.out.println("Enter Your Name:");
           sName = scanner.next();// next -  till space come  .it is used to accept word . 
            System.out.println("Enter Your Age:");
              iAge = scanner.nextInt();
              System.out.println("Enter Your Marks:");
                fMarks = scanner .nextFloat();
          System.out.println("Welcome " +sName);
          System.out.println("Your age is " +iAge);
          System.out.println("Your marks is " +fMarks);

          scanner.close();

    }
}
