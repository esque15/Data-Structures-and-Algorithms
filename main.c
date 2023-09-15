#include <stdio.h>
#include <stdlib.h>

void insertSLL();
void deleteSLL();
void displaySLL();
void countSLL();
void modifySLL();
void insertPositionSLL();


 struct SLL{
    int data;
    struct SLL *l;
 };
 struct SLL *start = NULL;

 int main()
 {
    struct SLL *p;
    int c;
    do{
        printf("ENTER 1 FOR INSERTION");
        scanf("%d", &c);
        switch(c)
        {
            case 1:
                insertSLL();
                break;
            default:
            printf("INVALID INPUT");
            break;
        }
    }while(c!=0);
}

void insertSLL(){
    int el;
    struct SLL *p;
    p=(struct SLL *)malloc(sizeof(struct SLL));
    if(p==NULL){
        printf("MEMORY OVERFLOW");
        return;
    }
    else{
        printf("ENTER DATA");
        scanf("%d", &el);
        p -> data = el;
        p -> l = NULL;
        if(start==NULL)
        {
            start=p;
        }
        else{
            p->l=start;
            start = p;
        }
    }
}


void insertFrontSLL()
{
    struct SLL *p, *q;
    int el;
    p = (struct SLL *) malloc(sizeof(struct SLL));
    if(p == NULL)
    {
        printf("MEMORY OVERFLOW");
        return;
    }
    printf("ENTER DATA");
    scanf("%d", &el);
    p -> data = el;
    p -> l = NULL;
    if(start == NULL)
    {
        start = p;
    }
else{
    p -> l = start;
    start = p;

}
}