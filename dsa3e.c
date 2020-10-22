#include <stdio.h>
#include <conio.h>
void min_heapify(int *a,int i,int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if ((j < n) && (a[j+1] < a[j]))
        {
            j = j + 1;
        }
        if (temp < a[j])
            break;
        else if (temp >= a[j])
        {
            a[j/2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = temp;
    return;
}
void build_minheap(int *a, int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        min_heapify(a,i,n);
    }
}
void MaxHeapify(int arr[], int i, int n)
{
    int temp;
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest = i;
    if (l < n && arr[l] > arr[i])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        MaxHeapify(arr, largest, n);
    }
}
void convertMaxHeap(int arr[], int n)
{
    for (int i = (n-2)/2; i >= 0; --i)
        MaxHeapify(arr, i, n);
}
int main()
{
    int n, i, x;
    printf("enter no of elements of array\n");
    scanf("%d",&n);
    int a[20];
    for (i = 1; i <= n; i++)
    {
        printf("Enter element %d\n",i);
        scanf("%d",&a[i]);
    }
    build_minheap(a, n);
    printf("Min Heap\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n",a[i]);
    }
    convertMaxHeap(a,n);
    printf("Max Heap\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
