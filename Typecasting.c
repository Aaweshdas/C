/*#include <stdio.h>
int main()
{
    float a= 1.2;
   // int b =a ;   
    int b = (int)a + 1;
    printf("Value of a is %f\n",a);
    printf("Value of b is %d\n",b);
    return 0;
}*/
#include <stdio.h>
int main()
{
    int a= 1.2;
   // int b =a ;   
    int b = (float)a + 1;
    printf("Value of a is %f\n",a);
    printf("Value of b is %d\n",b);
    return 0;
}
