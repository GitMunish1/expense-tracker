#include <stdio.h>

int main(){
    int principal;
    int rate;
    int time;
    int simple_interest;
   printf("what is the value of principal\n");
   scanf("%d",&principal);

   printf("what is the value of rate \n");
   scanf("%d",&rate);

   printf("what is the value of time in year\n");
   scanf("%d",&time);
   simple_interest= (principal*rate*time)/100;

   printf("the value of simple interest : %d \n",simple_interest);

    return 0;
}