#include <stdio.h>
int main ()
{
    int i, count=0, n, arr[30], target;
    printf ("Enter the number of elements in array:\n");
    scanf ("%d", &n);
    printf ("Enter the elements of array\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the target\n");
    scanf ("%d", &target);
    for (i=0; i<n; i++)
    {
        if (arr[i]==target)
        {
        count++;
        }
    }
    printf ("Total occurence of %d in the array is %d", target, count);
    return 0;
}