#include<stdio.h>
int main()c{
    int n=10;
    printf("Before: %d\n",n);
    int *p;
    p=&n;
    *p=20;
    printf("After: %d",n);
    return 0;
}