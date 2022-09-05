#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
char*inputString()
{
    char*s=(char*)malloc(sizeof(char));
    if(s==NULL)
    return 0;
    char x;
    int k=1;
     while(1)    
     {
        x=getche();
        if(x==13)
        {
            s[k-1]='\0';
            break;
        }
        else
        {
            s[k-1]=x;
            realloc(s,sizeof(char)*(++k));
        }
     }
     return s;
}
int main()
{
    printf("Enter the string : ");
    char*s=inputString();
    printf("\n%s\n",s);
    free(s);
    getch();
    return 0;
}