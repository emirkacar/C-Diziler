#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isimler[][30]={"Ali","Mehmet","Emir","Rafet","Alperen","Gulay","Nazim"};
    int i,j;
    char gecici[30];

    for(i=0;i<7;i++)
    {
        for(j=0;j<6;j++)
        {
            if(strcmp(isimler[j],isimler[j+1])>0)
            {
                strcpy(gecici,isimler[j]);
                strcpy(isimler[j],isimler[j+1]);
                strcpy(isimler[j+1],gecici);
            }
        }
    }

    printf("Alfabetik olarak siralanmis hali\n");
    for(i=0;i<7;i++)
    {
        printf("%s ",isimler[i]);
    }
    return 0;
}
