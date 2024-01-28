#include <stdio.h>
#include <stdlib.h>
#define N 4
int x, arr[N],front =-1, rear=-1;

void enqueue(){
    if((rear+1)%N == front){
        printf("overflow\n");
        return;
    }
    printf("enter data from rear : ");
    scanf("%d", &x);
     if(front = -1 && rear == -1){
        front = rear = 0;
        arr[rear] = x;
    }
    else{
        rear = (rear+1)%N;
        arr[rear] = x;
    }
}

void dequeue(){
    if(front ==-1 &&  rear==-1){
        printf("queue empty\n");
    }
    else if(front==  rear){
        front = -1;
        rear = -1;
    }
    else{
            int d = arr[front];
    printf("element deleted = %d", d);
        front = (front+1)%N;
    }
}
void display(){
        int i=front;
    while(i!=rear){
        printf("%d  ", arr[i]);
        i=(i+1)%N;
    }

    printf("%d\n", arr[i]);
}
void peak(){
    printf("first element of the queue is %d\n",arr[front]);
}
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
                peak();
                break; }


         }
     }while(p!=0);
}
