/*7. Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/
#include<stdio.h>
int main()
{
    char str[30];
    int i, digit=0,alpha=0,specichar=0;
    printf("Enter a string\n");
    fgets(str,30,stdin);
    for ( i = 0;str[i]; i++)
    {
        if ((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
         alpha++;
        else if (str[i]>='0' && str[i]<='9')
        digit++;
        else
        specichar++;
    }
    printf("The total number of alphabet is : %d\n",alpha);
    printf("the total number of digit is : %d\n",digit);
    printf("the total number of specialcharacter is : %d",specichar);
    return 0;
}