#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[10],i;
   printf("Please enter ten numbers, separated by space:");
 
     scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);

   printf("The number you just entered are:\n");
   for(i=0;i<10;i++)
      printf("%d\n",a[i]);
   return 0;
}
