#include <stdio.h>
#include <stdlib.h>

int countVowelsX(char *str)
{
int iCount = 0;
while(*str != '\0')
{
    if(*str == 'A'||*str == 'E' || *str == 'I'||*str == 'O'||*str == 'U')
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
    iRet = countVowelsX(Arr);
    printf("Frequency of Vowels is :%d\n",iRet);



    return EXIT_SUCCESS;
}
