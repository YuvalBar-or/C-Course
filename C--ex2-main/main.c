#include <stdio.h>
#include "my_mat.h"


int main(){
    char input =1;
    while (input!= 'D')
    {
        scanf("%c",&input);
        switch (input)
        {
        case 'A':
            fillMat();
            break;

        case 'B':
            route();
            break;
        
        case 'C':
            shortestRoute();
            break;
        
        case 'D':
            break;

         
        }
    }
    return 0;
    
    
}
