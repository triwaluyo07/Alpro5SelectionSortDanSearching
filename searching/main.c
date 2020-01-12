#include "header.h"

int main()
{
    int array[]={6,7,4,3,8};
    int cari,hasil;

    printf("Masukkan nilai yang anda cari : ");
    scanf("%d",&cari);
    hasil=sikuensearch(array,5,cari);

    if(cari==true)
    {
        printf("data tidak ditemukan");
    }
    else
    {
        printf("data ditemukan");
    }
    return 0;
}
