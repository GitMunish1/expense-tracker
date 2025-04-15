#include<stdio.h>
int main ()
 {
    int amt,total;
    printf("enter the amount:");
    scanf("%d",&amt);
    printf("*******************result******************");

    total=(int)amt/100;
    printf("\n %d is no. of 100 ruppes notes \n ",total);


    amt=amt-(total*100);
    total=(int)amt/50;
    printf("\n %d is no. of  50 ruppes notes",total);

    amt=amt-(total*50);
    total=(int)amt/20;
    printf("\n %d is no. of 20 ruppes notes ",total);

    amt=amt-(total*20);
    total=(int)amt/10;
    printf("\n %d is no. of 10 ruppes notes",total);

    amt=amt-(total*10);
    total=(int)amt/5;
    printf("\n %d is no. of 5 ruppes",total);

    amt=amt-(total*5);
    total=(int)amt/2;
    printf("\n %d is no. of 2 rupees",total);

    amt=amt-(total*2);
    total=(int)amt/1;
    printf("\n %d is no. of 1 ruppes",total);

return 0;

}