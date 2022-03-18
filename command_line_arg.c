#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("Value of argc is %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("The argument index number %d has value of %s\n",i,argv[i]);
    }
    
    return 0;
}
