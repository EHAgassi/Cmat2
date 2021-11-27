#include <stdio.h>
#include "my_mat.h"
#define T 10

void creat_mat(int mat1[][T]){ // func #1
    for(int i=0; i<T;i++ ){
        for(int j=0; j<T;j++ ){
            int c;
            scanf("%d",&c);
            mat1[i][j] = c;
        }
    }
    FWA(mat1);
}

void path (int mat1[][T], int i, int j){// func #2
         if (mat1[i][j]!=0)
        {
            printf("True\n");
            return;
        }
        else{
              printf("False\n");
        }
}

void shortest(int a){        
    if (a!=0)
    {
        printf("%d\n" ,a);
    }
    else
    {
        printf("%d\n",-1);
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
        return a>b ? b : a;
    }



