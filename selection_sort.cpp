#include <stdio.h>
int insertion_sort(int ary[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ary[i] < ary[j])
            {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}
void print_arr(int ary[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d index element :\n", i);
        scanf("%d", &arr[i]);
    }
    printf("Original array is :\n");
    print_arr(arr, n);
    insertion_sort(arr, n);
    printf("Sorted array is :\n");
    print_arr(arr, n);

    return 0;
}
