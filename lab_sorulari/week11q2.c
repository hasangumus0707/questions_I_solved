#include <stdio.h>

 int main(){

    int i,j,arrayA[3][4],arrayB[3][4],array_sum[3][4];
     
       for(i=0;i<3;i++){
          for(j=0;j<4;j++){

            printf("ArrayA[%d][%d]=",i,j);
            scanf("%d",&arrayA[i][j]);
          }
       }

        for(i=0;i<3;i++){
          for(j=0;j<4;j++){

            printf("ArrayB[%d][%d]=",i,j);
            scanf("%d",&arrayB[i][j]);
           }
        }
         for(i=0;i<3;i++){
           for(j=0;j<4;j++){
       
             array_sum[i][j]=arrayA[i][j]+arrayB[i][j];
             printf("Array_sum[%d][%d]=%d\n",i,j,array_sum[i][j]);
           }
        }
        
    return 0;
 }