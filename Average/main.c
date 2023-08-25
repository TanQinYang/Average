#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    double sum=0;
    int n=0;
    printf("Pls enter the terminal number:");
    scanf("%d",&a);
    while (a!=0)
    {
        sum=sum+a;
        n=n+1;
        scanf("%d",&a);
    }
    printf("%4f",sum/n);
    return 0;
}
