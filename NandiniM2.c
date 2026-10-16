# include <stdio.h>
int main ()
{
    int n, i, arr[30], present, t;
    printf ("Enter the number of elements in array:\n");
    scanf ("%d", &n);
    printf ("Enter the elements of array\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the target\n");
    scanf ("%d", &t);
    for (i=0; i<n; i++)
    {
        if (arr[i]==t)
        {
        printf ("Target number %d is present at array number %d", t,i);
        present=1;
        break;
        }    
    }
    if (present==0)
    {
    printf ("Target number is not present in the array");
    }
    return 0;
}