#include <stdio.h>
int main( )
{
    const int n=10;
    int a[n]={7,10,12,0,3,6,9,11,5,8}, i, k,m,min,t;
    for ( i = 0; i<n; i++) printf("%d  ",a[i]);
    printf("\n");
    min= a[0];  m=0;
    for ( k = 0; k < n; k++ )
        if ( a[k]<min )
        {
            min = a[k];
            m = k;
        }
    t = a[0]; a[0]=a[m]; a[m] = t;
    for ( i=0; i<n; i++ ) printf("%d  ",a[i]);
    printf("\n");
}