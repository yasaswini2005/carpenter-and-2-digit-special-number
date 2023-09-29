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
   printf("amount pid to each worker is %f\n",daily_wage*4);
   printf("amount paid to all workers %f\n",no_of_workers*worker_fee);
   printf("%f is amount left with carpenter\n",left);

    return 0;
}
