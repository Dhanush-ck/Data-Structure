#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

void push(struct Node *top, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if(top->next == NULL) {
        top->next = newNode;
        return;
    }
    newNode->next = top->next;
    top->next = newNode;
}

void pop(struct Node *top) {
    struct Node *temp = top->next;
    if(temp == NULL) {
        printf("Underflow Ocurred");
        return;
    }
    top->next = temp->next;
    temp->next = NULL;
    free(temp);
}

void peek(struct Node *top) {
    if(top->next == NULL){
        printf("Stack is empty\n");
        return;

    } 
    printf("%d is the top element value\n", (top->next)->data);
}

int main() {
    struct Node *top= malloc(sizeof(struct Node));
    top->next=NULL;
    struct Node *temp;
    int choice, val;
    while(1) {
        printf("\n1.PUSH \n2.POP \n3.PEEK \n4.DISPLAY \n5.EXIT \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &val);
                push(top, val);
                break;
            case 2:
                pop(top);
                break;
            case 3:
                peek(top);
                break;
            case 4:
                printf("Stored numbers are\n");
                temp = top->next;
                if(temp == NULL) {
                    printf("Linkedlist is empty\n");
                    break;
                }
                while(temp != NULL) {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
                printf("\n");
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}

