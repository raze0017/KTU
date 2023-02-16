#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *top;
void push(int key){
    struct node *newnode=malloc(sizeof(struct node*));
    newnode->data=key;
    if(top==NULL){
        top=newnode;
        newnode->link=NULL;
    }
    else{
        newnode->link=top;
        top=newnode;
    }

}void pop(){
    if (top==NULL)
    {
        /* code */
        printf("EMPTY");
    }
    else{
    printf("%d deleted\n",top->data);
    top=top->link;
    }
}
void display(){
            struct node *temp=malloc(sizeof(struct node*));
    temp=top;
    while (temp->link!=NULL)
    {
        /* code */
        printf("%d<-",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);

}
void main(){
    int r=1;
    int c,a;
    while(r==1){
        printf("ENTER CHOICE");
        printf("\n1.Push\n2.pop\n3.display\n4.end:\n");
        scanf("%d",&c);
        switch (c)
        {
        case(1):
            /* code */
            printf("Enter data to push:");
            scanf("%d",&a);
            push(a);
            break;
        case(2):
            /* code */
            pop();
            break;            
        case(3):
            /* code */
            display();
            break;
        default:
            break;
        }
    printf("\nDo you want to continue 1 for yes 2 for no:");
    scanf("%d",&r);
    }    
}