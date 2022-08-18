//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],string[20];
    int i;
    printf("Enter a string\n");
    fgets(str,20,stdin);
    /*for ( i = 0; str[i]; i++)
    string[i]=str[i];
    printf("Copied string = %s",string);*/
    printf("the copied string %s",strcpy(string,str));

  return 0;
}