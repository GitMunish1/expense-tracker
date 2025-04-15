#include <stdio.h>
int main (){
const int maxinput = 100;
double number, average, sum;
int i;
for (int i = 1;i<maxinput;i++){

   printf("%d,enter the number : ",i);
   scanf("%lf",&number);


   if (number<0.0){

    goto jump; 
   }

 sum+=number;

}

jump:
average = sum/(i-1);
printf("sum is %.2lf\n", sum);
printf("average is %.2lf\n",average);

return 0;

}