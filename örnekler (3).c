#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, y, z;
   int s1, s2, s3;

   x=10;
   y=5;
   z=-1;

   s1 = (x>y) && ! (0);
   s2 = (z != x) || !(0 == 1);

   printf("s1:%d\n",s1);
   printf("s2:%d\n",s2);
    return 0;
}
