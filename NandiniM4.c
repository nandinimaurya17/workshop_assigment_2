#include <stdio.h>
int main ()
{
    int i, n, max, arr[30];
    printf ("Enter the size of array\n");
    scanf ("%d", &n);
    printf ("Enter the elements of array\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d", &arr[i]);
    }
    max=arr[0];
    for (i=0; i<n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];

        }
    }
    printf ("Maximum element=%d", max);
    return 0;
}