#include <stdio.h>

int main(){
    int celsius;
    float fahrenheit;
    printf("what is the value of celsius \n");
    scanf("%d",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("the value of fahrenheit is %f",fahrenheit);
    return 0;
}