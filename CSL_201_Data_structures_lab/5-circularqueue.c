#include<stdio.h>
int size=3,front=-1,rear=-1;
int queue[20],a,c,r,i;
void enqueue(int data){
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[front]=data;
    }
    else if(front==(rear+1)%size){
        printf("overflow\n");
    }
    else{
        rear=(rear+1)%size;
        queue[rear]=data;
    }
}
void dequeu(){
    if(rear==-1 && front==-1){
        printf("EMPTY");
    }
    else if(front==rear){
        printf("%d deleted\n",queue[front]);
        front=rear=-1;
    }else{
        printf("%d deleted\n",queue[front]);
        front=(front+1)%size;
    }  
}
void display(){
    if(front==-1 && rear==-1)
    {
        printf("queue empty");
    }
    else{
        if(front<=rear){
            printf("queue elements are: \n");
            for(i=front;i<=rear;i++){
                printf("%d\n",queue[i]);
            }
        }
        else{
             printf("queue elements are: \n");
             for(i=0;i<=rear;i++){
                printf("%d\n",queue[i]);
             }
             for(i=front;i<=size-1;i++){
                printf("%d\n",queue[i]);
             }

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