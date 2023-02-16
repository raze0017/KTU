#include<stdio.h>
int partition(int a[],int low,int high)
{
    int temp;
    int pivot = high;
    int i=low-1;
    for (int j = low; j < high; j++)
    {
        /* code */
        if (a[j]<=a[pivot])
        {
            i++;
            /* code */

            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return i+1;
}
void quicksort(int a[],int low,int high)
{
    if(low<high){
        int pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}
void main()
{   
    int n,a[100];
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t",a[i]);
    }
    
}