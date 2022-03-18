#include<stdio.h>
#include<stdlib.h>

int *myfun()
{
    int a=50;
    return 0;


}
int main()
{   // case-1-De allocation of a memory block
    int *ptr*(int *)malloc(5*sizeof(int));
    ptr[0]=35;
    ptr[1]=36;
    ptr[2]=37;
    ptr[3]=38;
    ptr[4]=39;
    free(ptr);//Now the ptr is dangling pointer
     return 0;
}