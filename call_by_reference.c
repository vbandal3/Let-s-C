#include<stdio.h>
int swap(int *x,int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
    return 0;

}
int main()
{
  int a=75; int b=35;
  printf("Value of a and b are %d and %d\n",a,b);
  swap(&a,&b);
  printf("Value of a and b after swapping are %d and %d\n",a,b);
 
     return 0;
}