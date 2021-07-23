//program to extract substring form left

#include<stdio.h>
void main()
{
    int i=0, n;
    char str[100],substr[100];
    printf("\n Enter a string: ");
    gets(str);
    printf("\n Enter the number of characters to be copied: ");
    scanf("%d",&n);
    while(str[i] != '\0' && i<n)
    {
        substr[i] = str[i];
        i++;
    }
    substr[i] ='\0';
    printf("\n The substring is: ");
    puts(substr);
}
