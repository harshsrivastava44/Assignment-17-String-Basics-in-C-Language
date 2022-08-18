//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
    char str[20],c;
    int i,count=0;
    printf("Enter your name :\n");
    fgets(str,20,stdin);
    printf("Enter a character\n");
    scanf("%c",&c);
    for ( i = 0; str[i]; i++)
        if (c==str[i])
           count++;
    printf("The Occurence of given character in string is = %d",count);
    printf("\n");
    return 0;    
    
}