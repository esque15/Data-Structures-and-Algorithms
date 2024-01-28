#include <stdio.h>
#include <stdlib.h>
#define N 4
int x, arr[N],front =-1, rear=-1;

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

void enqueue(){

    if(rear == N-1){
        printf("OVERFLOW\n");
        return;
    }
    printf("enter data from rear : ");
    scanf("%d", &x);
    if(rear==-1 || front == -1){
        front = rear = 0;
        arr[rear] = x;
    }
    else{
        rear++;
        arr[rear] = x;
    }
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("data = %d\n", arr[i]);
    }
}
void dequeue(){   
    if(front ==  rear){
        printf("queue empty\n");
    }
    else if(front==  rear){
        front = -1;
        rear = -1;
    }
    else{
    front++;
    }
}
void peak(){
    if(front ==  rear){
        printf("queue empty\n");
    }
    printf("%d", arr[front]);
}
