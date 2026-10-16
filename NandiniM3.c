#include <stdio.h>
int main ()
{
    int i, n, count=0, arr[30];
    printf ("Enter the size of array\n");
    scanf ("%d", &n);
    printf ("Enter the elements of array\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d", &arr[i]);
    }
    for (i=0; i<n; i++)
    {
        if (arr[i]%2==0)
        {
            count++;
        }
    }
    printf ("The number of even elements in the array is %d", count);
    return 0;
}