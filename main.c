#include <stdio.h>
#include "my_mat.h"


int main(){
char input = 1;
int mat1 [T][T] = {0};
scanf ("%c", &input);
while ( input!='D')
{
    if (input == 'A')
    {
        creat_mat(mat1);
    }
    if (input == 'B')
    {
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);
       path(mat1, a ,b );
    }
     else if (input == 'C')
    {
        int i,j;
        scanf("%d%d",&i,&j);
        shortest(mat1[i][j]);
    }
    
 scanf("%c",&input) ;  
}

}

