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
    for ( i = 0; i <n; i++)
    {
        int position=i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[position])
            {
                position=j;
            }
        if(position!=i){
            temp=a[i];
            a[i]=a[position];
            a[position]=temp;
        }        
        }
        
        
    }
    for ( i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t",a[i]);
    }    
}