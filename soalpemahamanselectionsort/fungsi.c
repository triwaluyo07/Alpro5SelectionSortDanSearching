#include"header.h"

void cetak(int arr[], int n)
{
    int x;
    for(x=0;x<n;x++)
    {
        printf("[%d] ",arr[x]);
    }
}
void input(int arr[], int n)
{
    int x;

    for(x=0;x<n;x++)
    {

        printf("Masukkan nilai array ke %d : ",x);
        scanf("%d",&arr[x]);
    }
}
void selectionsort(int arr[],int n)
{
    int x;
    int y;
    int wadah;
    for(x=0;x<n-1;x++)
    {
        for(y=x+1;y<n;y++)
        {
            if(arr[x]>arr[y])
            {
                wadah=arr[x];
                arr[x]=arr[y];
                arr[y]=wadah;
            }
        }
    }
}
int hitungnilai(int arr[], int n)
{
    int x;
    int count=0;
    for(x=0;x<n;x++)
    {
        count=count+arr[x];
    }
    return(count);
}
