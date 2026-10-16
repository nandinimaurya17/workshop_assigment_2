# include <stdio.h>
int main ()
{
    int arr[30], sum=0, n;
    printf ("Enter the number of elements in array:\n");
    scanf ("%d", &n);
    printf ("Enter the elements of array\n");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &arr[i]);
        sum=sum+arr[i];
    }
    printf ("The sum of array elemets=%d", sum);
    return 0;
}