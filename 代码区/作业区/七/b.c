#include    <stdio.h>
int main()
{  int  b[9]={1,2,3,4,5,6,7,8,9}, i,t;
   printf("\nThe original data  :\n");
   for (i=0; i<9; i++)
      printf("%4d ", b[i]);
   printf("\n");
/**********found**********/
   for (i=0; i<4; i++)
   {
      t=b[i];
/**********found**********/
      b[i] = b[9-1-i];
/**********found**********/
      b[9-1-i] = t;
   }
   printf("\nThe data after invert  :\n");
   for (i=0; i<9; i++)
      printf("%4d ", b[i]);
   printf("\n");
   return 0;
}