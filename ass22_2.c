#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    printf("Number of values you want to enter : ");
    int n,sum=0;
    scanf("%d",&n);
    int*a=(int*)calloc(n,sizeof(int));
    if(a==NULL)
    return 0;
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    printf("Average is %0.2f\n",sum/(n+0.0));
    free(a);
    getch();
    return 0;
}