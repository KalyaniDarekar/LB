//$ % & # *
#include <stdio.h>
#include <stdlib.h>

int countFrequencyX(char *str)
{
    int iCountSmall = 0;
    int iClountDigit = 0;
    int iCountCapital = 0;
    int iCountSpecial = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= '0' && *str <= '9')
        {
            iClountDigit++;
        }
        else 
        {
            iCountSpecial++;
        }
        str++;
    }
    printf("Number of capital letters:%d\n",iCountCapital);
    printf("Number of digit letters:%d\n",iClountDigit);
    printf("Number of small letters:%d\n",iCountSmall);
    printf("Number of special Symbol:%d\n",iCountSpecial);
}

int main ()
{
    
    char Arr[100]= {'\0'};
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    countFrequencyX(Arr);
  



    return EXIT_SUCCESS;
}
