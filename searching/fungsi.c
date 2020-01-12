#include "header.h"

int sikuensearch (int arr[],int n,int cari)
{

    int x;
    for(x=0;x<n;x++)
    {
        if(arr[x]==cari)
        {
            cari==false;
        }
    }

    if(cari==true)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
