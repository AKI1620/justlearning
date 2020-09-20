#include<stdio.h>
#include<string.h>


int main()
{
    int x;
    scanf("%d",&x);
    
    for(int i=0;i<x;i++)
    {
        char s[100];        
        gets(s);

        for(int j=0; j < s[j] != '\0'; j++)
        {
            if(j%2==0)
            {
                printf("%c",s[j]);
            }
        }
        
        printf(" ");

        for(int j=0; j < s[j] != '\0'; j++)
        {
            if(j%2!=0)
            {
                printf("%c",s[j]);
            }
        } 
        printf("\n x == %d \n",x);

    }
    return 0;
}
