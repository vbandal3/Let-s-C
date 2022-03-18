#include<stdio.h>
int changevalue(int * add)
{
    *add=80;

}
int main()
{
    int a=65;
    printf("Value of a is %d\n",a);
    changevalue(&a);
     printf("Value of a is now %d",a);
     return 0;
}