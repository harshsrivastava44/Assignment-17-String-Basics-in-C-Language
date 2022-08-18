//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="harsh";
    int i,l,temp=0;

  printf("Enter a string:\n");
   fgets(str,20,stdin);
    for ( l = 0; str[l]; l++);
    for ( i = 0; i <l/2; i++)
    {
        temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }


    printf("%s",str);
    printf("\n");
    return 0;

}
