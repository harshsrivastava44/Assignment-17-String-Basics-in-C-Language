//5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter a string:\n");
    fgets(str,20,stdin);
    for ( i = 0; str[i]; i++)
        if (str[i]>='A' && str[i]<='Z')
           str[i]=str[i]+32;
    printf("string in lowerecase\n %s",str);
    printf("\n");
    return 0;

}