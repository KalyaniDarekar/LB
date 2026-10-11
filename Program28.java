import java.util.Scanner;

public class Program28
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);

        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;

        System.out.println("Enter Your Name:");
        sName = scanner.nextLine();  // Reads full name with spaces

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