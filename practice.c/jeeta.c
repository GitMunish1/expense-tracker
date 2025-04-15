#include <stdio.h>
int main (){
int munish1,munish2;
int hcf;
printf("enter the first number:\n");
scanf("%d",&munish1);

printf("enter the second number:\n");
scanf("%d",&munish2);

for(int i=1; i <= munish1 && i <= munish2; ++i)
{
    if(munish1%i==0 && munish2%i==0)
        hcf = i;
}
    printf("HCF of %d and %d is %d", munish1, munish2, hcf);

    return 0;


}