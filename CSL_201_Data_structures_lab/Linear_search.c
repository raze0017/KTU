#include<stdio.h>
int main()
{
    int search,flag,a[100],n,i;
    printf("ENTER THE NO OF ELEMENTS: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&search);
    for (i = 0; i<n; i++)
    {
        if(a[i]==search){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Element found at position %d",i+1);
    }
    else
    {
        printf("Element not present");
    }    
}