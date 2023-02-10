#include<stdio.h>
int main()
{
    int search,flag,a[100],n,i;
    printf("ENTER THE NO OF ELEMENTS: ");
    scanf("%d",&n);
    printf("Enter the elements: ");/*enter the numbers in ascending order or sort it 
                                    using any sorting algorithms*/  
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d",&search);
    int first=0;
    int last=n-1;
    int mid=(last+first)/2;
    while(a[mid]!=search && first<=last){
        mid=(last+first)/2;
        if(search<a[mid]){
            last=mid-1;
        }
        else if(search>a[mid]){
            first=mid+1;
        }
    }
    if (a[mid]==search)
    {
        printf("Element found at position %d",mid+1);
    }
    else{
        printf("Element not present");
    }
    
}