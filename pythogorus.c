#include <stdio.h>
#include <math.h>
int main(){
    int option;
    float hypothenuse,height,base;
    printf("\n select any option\n");
    printf("1.calculate the hypothenuse\n ");
    printf("2.calculate the height\n");
    printf("3.calculate the base\n");
    scanf("%d",&option);
    if(option==1){
        printf("enter height of the triangle\n");
        scanf("%f",&height);
        printf("enter base of the triangle\n");
        scanf("%f",&base);
        hypothenuse=sqrt(base*base+height*height);
        printf("the hypothenuse of the triangle is %f",hypothenuse);
    }
   else if (option==2){
    printf("enter base of the triangle\n");
    scanf("%f",&base);
    printf("enter hypothenuse of the triangle\n");
    scanf("%f",&hypothenuse);
    height=sqrt(hypothenuse*hypothenuse-base*base);
    printf("the height of the triangle is %f",height);
   }
 if(option==3){
    printf("enter height of the triangle\n");
    scanf("%f",&height);
    printf("enter hypothenuse of the triangle\n");
    scanf("%f",&hypothenuse);
    base=sqrt(hypothenuse*hypothenuse-height*height);
    printf("the base of the triangle is %.2f",base);
 }
  else if (option>=3){
    printf("you are mentle\n");
    printf("happy to you. you look like an animal.go back to zoo");
 }


}