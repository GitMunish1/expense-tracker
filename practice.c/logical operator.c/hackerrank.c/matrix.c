#include <stdio.h>

int main(){
    //define a 3x3 matrix
    int matrix[3][3] ={
     {1,2,3},
     {4,5,6},
     {7,8,9},
    };
   //access and print the elements of the matrix
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        printf("%d",matrix[i][j]);
      }
    printf("\n"); 
   }




 return 0;
}