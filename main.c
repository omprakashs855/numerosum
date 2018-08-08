#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b=0,n;
    printf("Enter the numeric value = ");
    scanf("%d",&n);
    while(n>10)
    {
       while(n>0)
       {
           b=b+n%10;
           n=n/10;
        }
        n=b;
        b=0;
    }
    printf("%d",n);
    return 0;
}
