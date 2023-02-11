#include<stdio.h>
int size=5,front=-1,rear=-1;
int queue[20],a,c,r;
void enqueue(int data){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[front]=data;
    }
    else if(rear==size-1){
        printf("overflow\n");
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void dequeu(){
    if(front==-1 && rear==-1 || front>=rear)
    {
        printf("queue empty\n");
    }
    else{
        printf("%d deleted\n",queue[front]);
        front++;
    }
    
}
void display(){
        if(front==-1 && rear==-1 || front>=rear)
    {
        printf("queue empty");
    }
    else{
        printf("queue elements are: \n");
        for(int i=front;i<=rear;i++){
            printf("%d\n",queue[i]);
        }
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