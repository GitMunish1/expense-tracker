// C Program to demonstrate array initialization
#include <stdio.h>
int main(){
int arr[2][3]={1,3,5,7,9};

 for(int i=0;i<3;i++){
    for (int j=0;j<4;j++){
    printf("  %d",arr[i][j]);

    }
    printf("\n");

 }
}