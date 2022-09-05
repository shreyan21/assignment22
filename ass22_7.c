#include<stdio.h>
// program to demonstrate memory leak
int main()
{  
    {
    int*p=NULL;
    p=(int*)malloc(sizeof(int));

    }
    return 0;

}