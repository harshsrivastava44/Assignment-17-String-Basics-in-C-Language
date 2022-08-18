//1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char str[20]="LUCKNOW";
    int i;
    for ( i = 0; str[i]!=0; i++);
    printf("The length of the string %d",i);
    printf("\n");
    return 0;    
    
}