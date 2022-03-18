#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()

{
    int *ptr;
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d this array\n", i);
        scanf("%d", &ptr[i]);
    }
        for (int i = 0; i < n; i++)
        {
            printf("The value at %d in this array is %d\n", i, ptr[i]);
        }
    
        printf("Enter the size of new array\n");
        scanf("%d", &n);

        ptr = (int *)realloc(ptr, n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            printf("Enter the value no %d this array\n", i);
            scanf("%d", &ptr[i]);

        }
            for (int i = 0; i < n; i++)
            {
                printf("The new value at %d in this array is %d\n", i, ptr[i]);
            }

            return 0;
 free(ptr);
        
        
}