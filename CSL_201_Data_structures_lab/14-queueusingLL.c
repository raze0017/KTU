#include<stdio.h>
#include<stdlib.h>
struct node
{
    /* data */
    int data;
    struct node *link;
};
int a,c,r;
struct node *front=NULL,*rear=NULL;
void enqueue(int key){
    struct node *newnode=malloc(sizeof(struct node *));
    newnode->data=key;
    if(front==NULL && rear==NULL){
        front=rear=newnode;
        newnode->link=NULL;
    }else{
        rear->link=newnode;
        rear=rear->link;
        newnode->link=NULL;
    }
}
void dequeu(){
        if (front==NULL && rear==NULL){
        printf("EMPTY");
    }
    else{
        printf("%d",front->data);
        front=front->link;
    }

}
void display(){
    struct node *temp=malloc(sizeof(struct node *));
    if (front==NULL && rear==NULL){
        printf("EMPTY");
    }
    else
    {
        temp=front;
        while(temp->link!=NULL){
            printf("%d->",temp->data);
            temp=temp->link;
        }
        printf("%d",temp->data);
    }
    
}
void main(){
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
            enqueue(a);
            break;
        case(2):
            /* code */
            dequeu();
            break;            
        case(3):
            /* code */
            display();
            break;
        default:
            break;
        }
    printf("Do you want to continue 1 for yes 2 for no:");
    scanf("%d",&r);
    }    
}
