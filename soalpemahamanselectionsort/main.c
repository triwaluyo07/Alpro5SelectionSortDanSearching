#include"header.h"

int main()
{   int jmlArr,jmltot;

    printf("Masukan jumlah Array : ");
    scanf("%d",&jmlArr);

    int Array[jmlArr];

    input(Array,jmlArr);

    selectionsort(Array,jmlArr);

    printf("\narray yang telah dirurutkan adalah \n");

    cetak(Array,jmlArr);

    jmltot=hitungnilai(Array,jmlArr);
    printf("\nJumlah total nilai array anda adalah %d",jmltot);

    puts("\n");
    return 0;
}
