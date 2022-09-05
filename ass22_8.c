#include<stdio.h>
// program to demonstrate dangling pointer
int main()
{
    int*p=NULL;
    {
        int x;
        p=&x;
    }
    return 0;
}