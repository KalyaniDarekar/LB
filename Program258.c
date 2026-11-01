#include <stdio.h>
#include <stdlib.h>

int countCapitalX(char *str)
{
int iCount = 0;
while(*str != '\0')
{
    if(*str >= 'A' && *str <= 'Z')
    {
    iCount++;
   }
     str++;
    
}
   return iCount;
}


int main ()
{
    int iRet = 0;
    char Arr[100]= {'\0'};
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    iRet = countCapitalX(Arr);
    printf("Frequency of Capital letters  :%d\n",iRet);



    return EXIT_SUCCESS;
}
