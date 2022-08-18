//3. Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    char str[20],V[5]={'a','e','i','o','u'};
    int i, j,count=0;
    printf("Enter your name :\n");
    fgets(str,20,stdin);
    printf("\nhello %s \n",str);
    for ( i = 0; str[i]; i++)
    {
        if (V[0]==str[i] || V[1]==str[i] || V[2]==str[i] || V[3]==str[i] || V[4]==str[i])
           count++;

    }
    printf("The vowels in your name is  %d",count);
    printf("\n");
    return 0;

}
