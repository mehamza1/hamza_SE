#include <stdio.h>
int main()
{
    char str[100];
    int i,len=0;
    printf("Enter String : \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    printf("\nLength of string: %d",len);
}