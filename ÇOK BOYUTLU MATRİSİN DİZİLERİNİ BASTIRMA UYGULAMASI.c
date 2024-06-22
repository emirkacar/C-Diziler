#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Cok boyutlu dizinin tum elemanlarini bastirma uygulamasi.Matris 2 boyutluysa iç içe 2 for loop,matris 3 boyutluysa iç içe 3 for loop,matris 4 boyutluysa ic ice 4 for loop kullanýlýr.
    int matris[3][4] = { {0,1,2,98} ,
                        {5,9,7,25} ,
                        {15,6,9,0} };
    printf("\n\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Dizinin %d . satir ve %d . sutun elemanlari : %d\n",i,j,matris[i][j]);
        }
    }

    return 0;
}
