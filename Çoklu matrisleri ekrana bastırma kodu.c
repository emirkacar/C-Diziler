#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[4][3]={ {2,8,7},
                       {25,38,47},
                       {12,5,26},
                       {18,15,75}};
    for(int i =0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d . satir %d . sutun : %d\n",i,j,matris[i][j]);
        }
    }
    return 0;
}
