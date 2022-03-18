# include<stdio.h>
#include<limits.h>
int main()

{ int var1=INT_MIN;
int var2=INT_MAX;
int var3= CHAR_MIN;
int var4= CHAR_MAX;
int var5=SHRT_MIN;
int var6=SHRT_MAX; 
unsigned int var7= 0; 
unsigned int var8= UINT_MAX;
short unsigned int var9 = 0;
short unsigned int var10 = USHRT_MAX;

printf(" \n size of long integer= %d ",sizeof(long int));
printf("\n size of integer= %d ",sizeof(int));
printf("\n size of short integer= %d ",sizeof(short int));
printf("\n size of %d",sizeof(long int));
printf("\n range of integer from %d to %d", var1,var2);
printf("\n range of character from %d to %d", var3,var4);
printf("\n size of character %d", sizeof(char));
printf("\n Range of short integer from %d to %d", var5,var6);
printf("\n range of unsigned character is %u to %u", var7, var8);
printf("\n size of unsigned char is %d", sizeof(unsigned char));
printf("\n Range of short unsigned integer from %d to %d", var9,var10);

return 0;



}