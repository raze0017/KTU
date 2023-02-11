#include<stdio.h>
int size=5,top=-1;
int stack[20],a,c,r;
void push(int data){
    if(top!=size-1){
        top++;
        stack[top]=data;
    }
    else{
        printf("Stack overflow");
    }
}
void pop(){
    if (top==-1)
    {
        printf("Stack empty");
    }
    else{
        top--;
        printf("%d deleted",stack[top]);
    }
    
}
void display(){
        if (top==-1)
    {
        printf("Stack empty");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
void main(){
    r=1;
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
    printf("Do you want to continue 1 for yes 2 for no:");
    scanf("%d",&r);
    }    
}