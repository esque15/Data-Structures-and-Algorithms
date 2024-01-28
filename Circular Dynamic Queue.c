#include <stdio.h>
#include <stdlib.h>

struct NODE{
    int data;
    struct NODE *next;
};

struct NODE *temp,*front,*rear,*newnode;

int main()
{
    int p;
     do{

            printf("ENTER 1 FOR ENQUEUE\n");
            printf("ENTER 2 FOR DISPLAY\n");
            printf("enter 3 FOR DEQUEUE\n");
            printf("ENTER 4 TO PEEK\n");
            scanf("%d", &p);
              switch(p){
            case 1:{

                enqueue();
                break;
                }
                case 2:{
                    display();
                    break;
                }
                case 3:{
                    dequeue();
                    break;
                }
                case 4:{
              peek();break;  }

         }
     }while(p!=0);
}

void enqueue(){
    newnode = (struct NODE *)malloc(sizeof(struct NODE));
    printf("enter data : ");
    scanf("%d", &newnode->data);
    if(front==NULL){
    rear=front=newnode;
    newnode->next = front;
    }
    else{
        rear->next=newnode;
        rear = rear->next;
        rear->next = front;
    }
}

void display(){
    temp=front;
    if(front==NULL){
        printf("QUEUE EMPTY\n");
        return;
    }
    while(temp !=rear){
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
}

void dequeue(){
    temp = front;
    if(front==NULL){
        printf("EMPTY\n");
    }
    else if(front==rear){
            front=rear=NULL;
        free(front);
    }
    else{
        front = front->next;
        rear->next=front;
        free(temp);
    }
}
void peek(){
    temp = front;
    if(front==NULL){
        printf("EMPTY\n");
    }
    printf("%d\n", front->data);
}
