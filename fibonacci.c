#include <stdio.h>
int main() 
    {  
        int iFib[30] = { 1,1 }, i;
    for (i = 2; i < 30; i++)
        iFib[i] = iFib[i - 1] + iFib[i - 2];
    for(i = 0; i < 30; i++)
    {
    printf("%-8d ",iFib[i]);
   if ((i + 1) % 5 == 0)
   printf("\n");
    }
    system("pause");
    return 0;
}