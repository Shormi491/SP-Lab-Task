#include<stdio.h>
int main()
{
    int n,fact=1,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        fact*=i;
        i++;

    }
    printf("%d\n",fact);

    return 0;
}
