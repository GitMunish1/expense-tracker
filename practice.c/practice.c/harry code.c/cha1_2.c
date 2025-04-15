#include <stdio.h>

int main(){
    float radius;
    int height;
    printf("what is the value of radius\n");
    scanf("%f",&radius);
    float area = 3.142857142857143*(radius*radius);
    printf("the area of circle is %f\n",area);
    //here a volume of cylinder
    printf("what is the height \n");
    scanf("%d",&height);
     //volume of cylinder is π · r2 · h//
    printf("volume of cylinder is %f",area*height);
    return 0;
}