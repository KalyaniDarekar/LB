/*#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char sName[30];  //static memory allocation
    printf("Enter Your Name :\n");
    scanf("%s",sName);
    printf("welcome %s\n",sName);

return EXIT_SUCCESS;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sName[30];  // Static memory allocation

    printf("Enter Your Name :\n");
    scanf("%s[^'\n']S", sName);  //special scanf

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}