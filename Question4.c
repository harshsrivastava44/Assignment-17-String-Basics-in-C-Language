//4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    char str[20];
    int i;
    printf("Enter your name :\n");
    fgets(str,20,stdin);
    for ( i = 0; str[i]; i++)
        if (str[i]>='a' && str[i]<='z')
           str[i]=str[i]-32;
    printf("\n string in uppercase\n %s",str);
    printf("\n");
    return 0;

}
