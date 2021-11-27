#include <stdio.h>
#include "my_mat.h"
#define T 10
int i,j;

void creat_mat(int mat1[][T]){ // func #1
    for(int i; i<T;i++ ){
        for(int j; j<T;j++ ){
            int c;
            scanf("%d",&c);
            mat1[i][j] = c;
        }
    }
    FWA(mat1);
}

void path (int mat1[][T]){// func #2
  
    scanf("%d%d",&i,&j);
         if (mat1[i][j]!=0)
        {
            printf("True\n");
            return;
        }
        else{
              printf("False\n");
        }
}

void shortest(int mat1[][T]){
        scanf("%d%d",&i,&j);
          
        if (mat1[i][j]!=0)
        {
            printf("%d\n" ,&mat1[i][j]);
        }
        else{
              printf("-1\n");
        }
 }

void print(int arr[][T]){
    for(int i=0; i<T;i++){
        for(int j=0; j<T;j++ ){
            printf("%d ,", arr[i][j]);
        }
         printf("\n");
    }       
}


void FWA(int mat1[][T]){
      for(int k=0; k<T;k++ ){
        for(int i=0; i<T;i++ ){
            for(int j=0; j<T;j++ ){
                if (i!=j && i!=k && j!=k && mat1[i][k]!=0 &&mat1[k][j]!=0){ 
                      mat1[i][j] = Min(mat1[i][j], (mat1[i][k]+mat1[k][j]));
                }
            }
        }
    }
}


int Min (int a,int b){
        if (a == 0) return b;
        else if (b == 0) return a;
        if  (a>b){
            return b;
        }
        return a;
        // return a>b ? b : a;
    }



// int main(){
//     int arr[][10] = {0 ,3,1 ,0 ,0 ,2 ,0 ,0 ,0 ,0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ,0 ,5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 1, 1, 2, 0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0 ,0 ,0, 0, 5, 4 ,0 ,0 ,0 ,0 ,2 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}; 
//     print(arr);
//     FWA(arr);
//     printf("\n");
//     print(arr);

 
// }

