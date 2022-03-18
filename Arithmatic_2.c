#include <stdio.h>
int main()
{
    float a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %f \n",c);
    c = a/b;
    printf("a/b = %f \n",c);
    // c = a%b;
    // printf("Remainder when a divided by b = %f \n",c);
    
    return 0;
}