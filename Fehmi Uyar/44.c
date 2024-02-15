#include<stdio.h>
#include<stdlib.h>

int main(){
/*1 
  22
  333 Şeklinde sayı yazdırma  */
    int i,j,k,number;
     printf("Enter number:");
     scanf("%d",&number);
      
      for(i=1;i<=number;i++){
        j=i;
        for(k=1;k<=i;k++){
            printf("%d",j);
        }

        printf("\n");
      }


    return 0;
}