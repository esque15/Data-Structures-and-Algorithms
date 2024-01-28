#include <stdio.h>

// Function prototypes
void push();
void pop();
void display();
void count();

int st[10];
int top = -1;

int main() {
    int c;

    do{
        printf("1 for PUSH, 2 for POP, 3 for DISPLAY, 4 for COUNT, 0 to EXIT: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                count();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("INVALID INPUT\n");
        }
    } while (c != 0);

    return 0;
}

void push() {
    int el;

    if (top >= 9) {
        printf("STACK OVERFLOW\n");
        return;
    }

    top = top + 1;
    printf("Enter the element: ");
    scanf("%d", &el);
    st[top] = el;
}

void pop() {
    int el;

    if (top == -1) {
        printf("STACK UNDERFLOW\n");
        return;
    }

    el = st[top];
    printf("Deleted element: %d\n", el);
    top = top - 1;
}

void display() {
    int i;

    if (top == -1) {
        printf("STACK UNDERFLOW\n");
        return;
    }

    for (i = top; i >= 0; i--) {
        printf("Stack [%d] = %d\n", i, st[i]);
    }
}

void count() {
    if (top != -1) {
        printf("Number of elements in stack: %d\n", top + 1);
    } else {
        printf("Stack is empty.\n");
    }
}
