#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("How many numbers you want to enter : ");
    scanf("%d",&n);
    int sum=0;
    int*p=(int*)malloc(n*sizeof(int));
    if(p==NULL)
    {
        return 0;
    }
    int i;
    printf("Enter the numbers : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum+=p[i];
    }
    free(p);
    fflush(stdin);
    printf("Sum is %d\n",sum);
    getc(stdin);
    return 0;

}