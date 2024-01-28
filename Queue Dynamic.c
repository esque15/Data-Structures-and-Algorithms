#include <stdio.h>
#include <stdlib.h>

struct NODE{
    int data;
    struct NODE *next;
};

struct NODE *head = NULL, *tail = NULL, *temp, *newnode;

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
                peek();
                break;
            }
        }
    }while(p!=0);
}

void enqueue(){
    newnode = (struct NODE *)malloc(sizeof(struct NODE));
    newnode->next=NULL;
    printf("enter data : ");
    scanf("%d", &newnode->data);
    if(head ==NULL && tail ==NULL){
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}


void display(){
    temp =head;
    if(head==NULL){
        printf("QUEUE EMPTY\n");
        return;
    }
    while(temp!=NULL){
        printf("%d  ", temp->data);
        temp= temp->next;
        printf("\n");
    }
}

void dequeue(){
    if(head==NULL){
        printf("QUEUE EMPTY\n");
        return;
    }
    printf("%d dequeued\n", head->data);
    temp = head;
    head = head->next;
    free(temp);
}
void peek(){
    if(head==NULL){
        printf("QUEUE EMPTY\n");
        return;
    }

    printf("%d is the first element of the queue\n", head->data);
}
