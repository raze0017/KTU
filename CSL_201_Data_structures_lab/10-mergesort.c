#include<stdio.h>
void merge(int a[],int left,int mid,int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int L[n1],R[n2];
    for (i = 0; i < n1; i++)
    {
        /* code */
        L[i]=a[i+left];
    }
    for (j = 0; j < n2; j++)
    {
        /* code */
        R[j]=a[j+mid+1];
    }
    i=j=0;
    k=left;
    while (i<n1 && j<n2)
    {
        /* code */
        if (L[i]<=R[j])
        {
            /* code */
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++; 
    }
    while (i<n1)
    {
        /* code */
        a[k]=L[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        /* code */
        a[k]=R[j];
        j++;
        k++;
    }
    
}
void mergesort(int a[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}
void main()
{   
    int n, a[100];
    printf("Enter array size:");
    scanf("%d", &n);
    printf("Enter elements:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    mergesort(a, 0, n-1);
    printf("Sorted array is:");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    } 
}