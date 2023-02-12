#include<stdio.h>
int main(){
    int n,a[20],i,temp,j;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for (i = 0; i < n; i++)
    {  
        scanf("%d",&a[i]);
    }
    for ( i = 1; i <n; i++)
    {
        j=i;
        while(j>0 && a[j-1]>a[j]){
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t",a[i]);
    }    
}