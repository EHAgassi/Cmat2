#include <stdio.h>
 #include "my_mat.h"


int main(){
char input;
int mat1 [T][T] = {0};
scanf ("%c", &input);
while ( input!='D')
{
    if (input == 'A')
    {
     creat_mat(mat1);
     FWA(mat1);
    }
    else if (input == 'B')
    {
       path(mat1);
    }
     else if (input == 'C')
    {
        shortest(mat1);
    }
    
 scanf("%c",&input) ;  
}

}

