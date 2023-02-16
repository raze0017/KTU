#include<stdio.h>
int r,c,i,a,size;
void insert(int key,int hash[size],int queue[size]){
    int index=key%size;
    while(hash[index]!=-1){
        index=(key+1)%size;
    }
    if(hash[index]==-1){
        hash[index]=key;
    }else{
        printf("Table full\n");
    }
}
void delete(int hash[]){
    int n;
    int i;
    printf("Enter the key to delete:\n");
    scanf("%d",&n);
    i=0;
    while (hash[i]!=n)
    {
        /* code */
        i=(i+1)%size;
    }
    printf("%d deleted\n",hash[i]);
    hash[i]=-1;
    
}
void display(int hash[]){
        for(int i=0;i<size;i++){
        printf("%d at %d\n",hash[i],i);
    }
}
void main(){
    size=10;
    int queue[size];
    int hash[size];
    
    for(int i=0;i<size;i++){
        hash[i]=-1;
    }
    {
    r=1;
    while(r==1){
        printf("ENTER CHOICE");
        printf("\n1.enqueue\n2.dequeu\n3.display\n");
        scanf("%d",&c);
        switch (c)
        {
        case(1):
            /* code */
            printf("Enter data to push:");
            scanf("%d",&a);
            insert(a,hash,queue);
            break;
        case(2):
            /* code */
            delete(hash);
            break;            
        case(3):
            /* code */
            display(hash);
            break;
        default:
            break;
        }
    printf("\nDo you want to continue 1 for yes 2 for no:");
    scanf("%d",&r);
    }    
}

}