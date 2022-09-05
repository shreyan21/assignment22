#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int x;
    printf("Enter the size in bytes : ");
    scanf("%d",&x);
    void*p=malloc(x);
    if(p==NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory successfully allocated\n");
        free(p);
    }
    return 0;
}