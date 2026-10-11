//approch2
import java.util.Scanner;

public class Program34
{
    public int Addition(int iNo1, int iNo2)
    {
        int iANs = 0;
        iANs = iNo1 + iNo2;
        return iANs;

    }
    public static void main(String A[])
    {
        Scanner scanner = null;
        int iValue1 = 0, iValue2 = 0, iResult = 0;
       scanner = new Scanner(System.in);
  System.out.println("Enter first number:");
  iValue1 = scanner.nextInt();
   System.out.println("Enter second number:");
  iValue2 = scanner.nextInt();
  iResult = Addition(iValue1,iValue2); // error 
  System.out.println("Addition is " + iResult);

    }
       
}