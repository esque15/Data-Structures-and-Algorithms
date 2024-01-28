#include<stdio.h>
#include<stdlib.h>

struct NODE{
    int data;
    struct NODE *ptr;
};

struct NODE *start, *newnode, *temp;
int count,position;

void insertSLL();
void displaySLL();
void countSLL();
void insertAtFront();
void insertAtBack();
void insertAtAnyPosition();
void deleteAtFront();
void deleteAtBack();
void deleteAtAnyPosition();
void searchByValue();


int main(){
    int select;
    do{
        printf("\nENTER 1 TO INSERT INTO SINGLY LINKED LIST\n");
        printf("ENTER 2 TO DISPLAY DATA OF SINGLY LINKED LIST\n");
        printf("ENTER 3 TO CHECK THE COUNT OF NODES IN SINGLY LINKED LIST\n");
        printf("ENTER 4 TO INSERT AT FRONT OF THE SINGLY LINKED LIST\n");
        printf("ENTER 5 TO INSERT AT BACK OF THE SINGLY LINKED LIST\n");
        printf("ENTER 6 TO INSERT AT ANY POSITION IN THE SINGLY LINKED LIST\n");
        printf("ENTER 7 TO DELETE AT FRONT FROM SINGLY LINKED LIST\n");
        printf("ENTER 8 TO DELETE AT BACK FROM SINGLY LINKED LIST\n");
        printf("ENTER 9 TO DELETE AT ANY POSITION FROM SINGLY LINKED LIST\n");
        printf("ENTER 10 TO SEARCH ELEMENT BY VALUE IN THE SINGLY LINKED LIST\n");
        printf("ENTER 0 TO EXIT THE SINGLY LINKED LIST\n");

        scanf("%d", &select);
        switch (select)
        {
            case 1:{
                    insertSLL();
                    break;
                }
            case 2:{
                    displaySLL();
                    break;
                }
            case 3:{
                    countSLL();
                    break;
                }
            case 4:{
                    insertAtFront();
                    break;
                }
            case 5:{
                    insertAtBack();
                    break;
                }
            case 6:{
                    insertAtAnyPosition();
                    break;
                }
            case 7:{
                    deleteAtFront();
                    break;
                }
            case 8:{
                    deleteAtBack();
                    break;
                }
            case 9:{
                    deleteAtAnyPosition();
                    break;
                }
            case 10:{
                searchByValue();
                break;
            }
            default:{
                printf("INVALID INPUT ENTERED\n");
            }
        }
    }while(select!=0);
}


void insertSLL(){

    newnode = (struct NODE *) malloc(sizeof(struct NODE));
    printf("\nENTER THE DATA IN LINKED LIST : ");
    scanf("%d", &newnode->data);
    newnode->ptr=NULL;
    if(start==NULL){
        start = temp = newnode;
    }
    else{
        temp->ptr=newnode;
        temp=newnode;
    }
    return; 
}

void displaySLL(){
    if(start == NULL){
        printf("\nLINKED LIST EMPTY\n");
        return;
    }
    else{
    int i=1;
    temp = start;
    while(temp!=NULL){
        printf("\nTHE DATA AT %d NODE IS %d\n",i, temp->data);
        temp = temp->ptr;
        i++;
    }
    return;
    }
}

void countSLL(){
    if(start == NULL){
        printf("\nLINKED LIST EMPTY\n");
        return;
    }
    else{
        temp = start;
    while(temp!=NULL){
        temp = temp->ptr;
        count++;
    }
    printf("\nTHERE ARE %d ELEMENTS IN THIS SINGLY LINKED LIST\n",count);
    return;
    }
}

void insertAtFront(){
    if(start == NULL){
        printf("LINKED LIST EMPTY");
        return;
    }
    else{
        newnode = (struct NODE *)malloc(sizeof(struct NODE));
        if(newnode==NULL){
            printf("MEMORY ALLOCATION TO NEW NODE FAILED\n");
            return;
        }
        else{
            printf("ENTER THE DATA FOR THE NEW FRONT NODE : ");
            scanf("%d", &newnode->data);
            newnode->ptr = start;
            start = newnode;
            return;
        }
    }
}

void insertAtBack(){
    if(start == NULL){
        printf("LINKED LIST EMPTY");
        return;
    }
    else{
        newnode = (struct NODE *)malloc(sizeof(struct NODE));
        if(newnode==NULL){
            printf("MEMORY ALLOCATION TO NEW NODE FAILED\n");
        }
        else{
            printf("ENTER THE DATA FOR THE NEW REAR NODE : ");
            scanf("%d", &newnode->data);
            newnode->ptr = NULL;
            temp = start;
            while (temp->ptr!=NULL)
            {
                temp=temp->ptr;
            }
            temp->ptr = newnode;
        }
    }
}

void insertAtAnyPosition(){
    int i=1;
    temp = start;
    while(temp!=NULL){
        temp = temp->ptr;
        count++;
    }
    printf("ENTER POSITION AT WHICH YOU WANT TO INSERT THE DATA\n");
    scanf("%d",&position);
    if(position>count){
        printf("INVALID POSITION ENTERED\n");
        return;
    }
    else{
        temp = start;
        while(i<position-1){
            temp = temp->ptr;
            i++;
        }
        newnode = (struct NODE *)malloc(sizeof(struct NODE));
        if(newnode==NULL){
            printf("MEMORY ALLOCATION TO NEW NODE FAILED\n");
            return;
        }
        printf("ENTER THE DATA AT %d POSITION",i);
        scanf("%d", &newnode->data);
        newnode->ptr = temp->ptr;
        temp->ptr = newnode;

    }
}
void deleteAtFront(){
    if(start == NULL){
        printf("LINKED LIST EMPTY\n");
        return;
    }
    else{
        temp = start;
        int s = temp->data;
        start = temp->ptr;
        free(temp);
        printf("\nSUCCESSFULLY DELETED THE DATA %d AT FRONT\n", s);
    }
}

void deleteAtBack(){
    if(start == NULL){
        printf("LINKED LIST EMPTY\n");
        return;
    }
    else if(start->ptr == NULL){ 
        int s = start->data;
        free(start);
        printf("\nSUCCESSFULLY DELETED %d AT BACK\n",s);
    }
    else{
        struct NODE * prev;
        temp = start;
        while(temp->ptr != NULL){
            prev = temp;
            temp = temp->ptr;
        }
        int s =  temp->data;
        prev->ptr = NULL;
        free(temp);
        printf("\nSUCCESSFULLY DELETED %d AT BACK\n",s);
    }
}

  

void deleteAtAnyPosition(){
    int pos;
    printf("ENTER POSITION AT WHICH YOU WANT TO DELETE THE DATA\n");
    scanf("%d", &pos);
    if(pos>count){
        printf("INVALID POSITION ENTERED\n");
        return;
    }
    else{
        struct NODE * next;
        if(start == NULL){
            printf("\nLINKED LIST EMPTY\n");
            return;
        }
        else if(start->ptr==NULL){
            int s = start->data;
            free(start);
            printf("\nSUCCESSFULLY DELETED %d AT FRONT\n",s);
        }
        else{
            struct NODE * prev,*next;
            temp = start;
            next = temp;
            int i=1;
            while(i<pos){
                next = next->ptr;
                prev = temp;
                temp = temp->ptr;
                i++;
            }
            next = next->ptr;
            prev->ptr = next;
            int s = temp->data;
            free(temp);
            printf("\nSUCCESSFULLY DELETED %d AT %d\n",s,pos);
            count--;
        }
    }
}
void searchByValue(){
    int s,d;
    if(start == NULL){
        printf("\nLINKED LIST EMPTY\n");
        return;
    }
    else{
        temp = start;
        printf("ENTER THE NUMBER YOU WANT TO SEARCH IN THE SINGLY LINKED LIST\n");
        scanf("%d", &s);
        for(int i = 1; temp->ptr!=NULL;i++){
            d = temp->data;
            temp = temp->ptr;
            if(d==s){
                printf("\nELEMENT %d FOUND AT %dTH POSITION\n",s,d);
            }
        }
        if(d!=s){
            printf("\nELEMENT NOT FOUND IN THE SINGLY LINKED LIST\n");
        }
        return;
    }
}