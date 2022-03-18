#include<stdio.h>
int main()
{int value[2][3] = {{1,2,3},{4,5,6}};
 for (int i = 0; i < 2; i++)
{ for (int j = 0; j < 3; j++)
{
    printf("Element of %d row and %d column is %d\n",i,j,value[i][j]);
}

}
 return 0;}