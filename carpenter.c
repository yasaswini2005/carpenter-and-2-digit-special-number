#include <stdio.h>

int main()
{
   float worker_fee;
   float t,daily_wage,no_of_workers,left;
   t=4800.00;
   scanf("%f",&daily_wage);
   worker_fee=daily_wage*4;
   scanf("%f",&no_of_workers);
   left=t-(no_of_workers*worker_fee);
   printf("%f",left);

    return 0;
}
