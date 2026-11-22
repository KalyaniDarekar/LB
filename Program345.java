import java.util.Scanner;
class Program345
{
  public static int Summation(int Arr[])
  {
  int iCnt = 0 ,iSum = 0;

  for(iCnt = 0; iCnt< Arr.length; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }
  return iSum;
  }
  public static void main(String A[])
  {


    int iCnt =0 ,iSize = 0 , iRet = 0;
    int ptr [] =null;   // int *ptr = NULL; in c and cpp
    Scanner scanner = null;
     scanner = new Scanner(System.in);

    System.out.println("Enter the number of elements :");
    iSize = scanner.nextInt();
    //ptr = (int *)malloc (sizeof(int)*iSize) //c 
  //ptr = new int [iSize]; cpp
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

    iRet = Summation(ptr);
    System.out.println("Addition is :" +iRet);
   // step3 - dealoocate the memory 
   scanner = null;
   ptr = null;
   System.gc();

  }
}