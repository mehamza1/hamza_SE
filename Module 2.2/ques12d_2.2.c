#include <stdio.h>

int main() 
{
   int n;						
   printf("Enter no :");
   scanf("%d", &n);
   int sum = 1;
   for (int i = 1; i <= n; i++) 
   {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d ", sum);
            sum=sum+1;
        }
        printf("\n");
   }
   }
