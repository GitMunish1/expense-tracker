#include <stdio.h>

int main(){
    int matrix[3][3]={
    {1,2,3},
    {4,5,6},
    {7,8,9},
    };
    //access and print elements
    printf("element at matrix[0][3]: %d\n",matrix[0][2]);//3
    printf("element at matrix[2][2]: %d\n", matrix[2][2]);//9
    printf("element at matrix[1][2]: %d\n", matrix[1][2]);//6
    return 0;
}