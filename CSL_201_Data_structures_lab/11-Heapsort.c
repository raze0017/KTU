#include<stdio.h>
void heapify(int a[],int largest,int n){
    int i=largest;
    int left=i*2+1;
    int right=i*2+2;
    if(left<n && a[left]>a[largest]){
        largest=left;
    }
    if(right<n && a[right]>a[largest]){
        largest=right;
    }
    if(largest !=i){
        int temp=a[largest];
        a[largest]=a[i];
        a[i]=temp;
        heapify(a,largest,n);
    }
}
void heapsort(int a[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(a,i,n);
    }
    for(int i=n-1;i>=0;i--){
        int temp=a[0];
        a[0]=a[i];
        a[i]=temp;
        heapify(a,0,i);
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
    heapsort(a,n);
    printf("Sorted array is:");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    } 
}