#include <stdio.h>
int main() {
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;

printf("the value of a+c is %d\n", a + c);
printf("the value of x+c is %f\n",x + c);
printf("the value of dx+x is %f\n",dx + x);
printf("the value of ((int) dx) + ax is %lf\n",((int) dx) + ax);
printf("the value of a+x is %f\n",a + x);
printf("the value of s+b is %d\n",s + b);
printf("the value of ax+b is %d\n",ax + b);
printf("the value of s+c is %d\n",s + c);
printf("the value of ax+c is %d\n",ax + c);
printf("the value of ax+ux is %d\n",ax + ux);

}
