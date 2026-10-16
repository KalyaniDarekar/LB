import java.util.Scanner;
class Program66
{
     public static void main (String A[])
    {
        
       Scanner scanner = new Scanner(System.in);
       int iValue = 0;
        Iteration iteration = new Iteration();

        System.out.println("Enter The Freuency :");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }

}
class Iteration
{
public void Display(int iNo)
    {
    int iCnt = 0;  //initalization
    iCnt = 1;  //starting
    // Head checking
    while( iCnt <= iNo)
    {
        System.out.println("-------------");
        System.out.println(iCnt + " Jay Ganesh...");
        //printf("%d Jay Ganesh...\n",iCnt)
        System.out.println("-------------");
         iCnt++;
    }
   }
}