import java.util.Scanner;
class Program343
{
  public static void main(String A[])
  {


    int iCnt =0 ,iSize = 0;
    int ptr [] =null;   // int *ptr = NULL; in c and cpp
    Scanner scanner= new Scanner(System.in);

    System.out.println("Enter the number of elements :");
    iSize = scanner.nextInt();
    //ptr = (int *)malloc (sizeof(int)*iSize) //c 

    // step1 - allocate the memory 
    ptr = new int [iSize];

  // step 2 - use the memory 
    System.out.println("Enter the Elements:");
    for(iCnt= 0; iCnt<ptr.length ; iCnt++)
    {
      ptr[iCnt]= scanner.nextInt();

    }

     System.out.println("Elements of the array are:");
    for(iCnt= 0; iCnt<ptr.length ; iCnt++)
    {

       System.out.println(ptr[iCnt]);
    }

    
   // step3 - dealoocate the memory 
  }
}