#include<stdio.h>
void main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        for(j=1;j<=2*n-1;j++){
            if(i+j==n+1||j-i==n-1)
                printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    for(int k=1;k<=2*n-1;k++){
                printf("*");
            }
   
}