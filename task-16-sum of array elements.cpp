#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for( int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);

    }

    for( int i=0;i<5;i++)
    {
        sum+=arr[i];


    }
    printf("%d",sum);



    return 0;
}
