#include <stdio.h>
#include "my_mat.h"
int mat [size][size];

void fillMat()
{
    for (int i = 0; i < size; i++)
    {
        for (int j= 0; j < size; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    minRouteHelp();
   
    
}

void minRouteHelp()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (mat[i][j] > mat[i][k] + mat[k][j]||mat[i][j]==0)
                {
                    if (mat[i][k]!=0&&mat[k][j]!=0)
                    {
                        mat[i][j] = mat[i][k] + mat[k][j];
                    }
                }
            }   
        }
    }
    for (int i=0; i<size; i++){
        for (int j=0 ; j< size ; j++){
            if (i==j){
                mat [i][j]=0;
            }
        }
    }

    
    }



void route()
{
    int x=0, y=0;
    scanf("%d%d", &x ,&y);
    if (mat[x][y]!=0)
    {
        printf("True\n");
    }
    else
    printf("False\n");
}
void shortestRoute()
{
    int x=0, y=0;
    scanf("%d%d", &x, &y);
    if (mat[x][y]==0 || x==y)
    {
        printf("-1\n");
    }
    else
    printf("%d\n", mat[x][y]);
}
