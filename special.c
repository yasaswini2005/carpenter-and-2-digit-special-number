
#include <stdio.h>

int main()
{
   int n;
   int a,b;
   int sum,product;
   scanf("%d",&n);
a=n/10;
b=n%10;
sum=a+b;
product=a*b;
if(n==(sum+product))

    printf("it is a special 2-digit number");

else 
    printf("not a special 2 digit number");

    return 0;
}
