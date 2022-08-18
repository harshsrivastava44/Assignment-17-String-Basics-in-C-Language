//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
    char str[20],freq[150]={0};
    int i;
    printf("Enter a string :\n");
    fgets(str,20,stdin);
   
    for(i=0;str[i]!='\0';i++)
    {
       freq[str[i]]++;
        
    }
    for ( i = 0; i <150; i++)
    {  
         if(freq[i]!=0)
         printf("%c ==>%d\n",i,freq[i]);
    }
    
  
    printf("\n");
    return 0;    
    
}