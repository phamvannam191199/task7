#include <stdio.h>
#include <stdlib.h>
#define MAX 50
 

int main() 
{

    int n , i, s = 0;
    int a[10];
 
    
    for (i = 0; i < n; i++) 
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
 

    printf("\nMang da nhap o vi tri chan la:\n");
    for (i = 0; i < 10; i++) 
    {
        printf ("a[%d]=%d \t",i++,a[i]);
       
       
    }
    }
