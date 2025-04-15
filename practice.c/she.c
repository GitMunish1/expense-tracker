#include <stdio.h>
int main(){
char operation;
double n1,n2;
printf("enter the  opertion:('-','+','*','/')\n");
scanf("%c",&operation);

printf("enter the first  opertor:\n");
scanf("%lf",&n1);
printf("enter the second opertor:\n");
scanf("%lf",&n2);
switch(operation){

       case'-':
       printf("subtraction of number\n");
       printf("%lf-%lf=%.1lf",n1, n2, n1-n2);
       break;

       case'+':
       printf("addition of number\n");
       printf("%lf+%lf=%.1lf",n1, n2, n1+n2);
       break;

       case'*':
       printf("multiplution of number\n");
       printf("%lf*%lf=%.1lf",n1, n2, n1*n2);
       break;

       case'/':
       printf("division of number\n");
       printf("%lf/%lf=%.1lf",n1, n2, n1/n2);
       break;

       default:
       printf("sorry");




}





return 0;





}