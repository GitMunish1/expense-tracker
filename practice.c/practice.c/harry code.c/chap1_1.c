#include <stdio.h>
int main(){
int length;
int breath;

printf("what is the value of length\n");
scanf("%d",&length);
printf("what is the value of breath\n");
scanf("%d",&breath);
int area = length*breath;
printf("ther area of rectangle is %d",area);


return 0;
}