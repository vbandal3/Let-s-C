#include<stdio.h>

int add(int a, int b)
{
    return a+b;

}

int main()
{int x=5; int y=6;
    int s=add(x,y);
    printf("addition is %d\n",s);
     return 0;
}