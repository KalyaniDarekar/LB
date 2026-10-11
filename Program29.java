import java.util.Scanner;

public class Program29
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        scanner = new Scanner(System.in);

        System.out.println("Enter Your Full Name:");
        sName = scanner.nextLine();  // Accepts full name with spaces

        System.out.println("Enter Your Age:");
        iAge = scanner.nextInt();

        System.out.println("Enter Your Marks:");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName);
        System.out.println("Your age is " + iAge);
        System.out.println("Your marks are " + fMarks);

        scanner.close();
    }
}